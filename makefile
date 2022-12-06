CC = gcc
FLAGS = -Wall -g
AR = ar


all: mains maindloop maindrec loops 
	

# make main programs
mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm 


# make dependencis of main programs:

# make libararies 
recursives:	libclassrec.a

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o 	

loopd: libclassloops.so

libclassloops.so: basicClassification.o advancedClassificationLoop.o 
	$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

recursived: libclassrec.so

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

loops: libclassloops.a

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o



# make for basic files of the programs 
main.o: main.c 
	$(CC) $(FLAGS) -c main.c 

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm 

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm

 
.PHONY: all clear

clean: 
	rm -f *.o *.a *.so mains maindloop maindrec 



	




	


	 


