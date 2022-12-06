
#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main(){
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    int MinNum = getMin(x,y);
    int maxNum = getMax(x,y);

// Armstrong numbers
 printf("The Armstrong numbers are:");
     for(int i = MinNum; i<= maxNum; i++){
         if(isArmstrong(i)){
            printf(" %d",i);
         }
     }
    

// Palindrom numbers
    printf("\nThe Palindromes are:");
    for(int i = MinNum; i<= maxNum; i++){
        if(isPalindrome(i)){
            printf(" %d",i);
        }
    }
   

//Prime number
    printf("\nthe Prime numbers are: ");
    for(int i = MinNum; i<= maxNum; i++){
        if(isPrime(i)){
            printf(" %d",i);
        }
    }
    

// Strong numbers
printf("\nThe Strong numbers are:");
    for(int i = MinNum; i<= maxNum; i++){
        if(isStrong(i)){
            printf(" %d",i);
        }
    }  


return 0;

}