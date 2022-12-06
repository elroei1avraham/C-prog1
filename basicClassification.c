#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int isPrime(int x)
{
   int ans = 1;

   if (x < 1)
      return 0;

   if(x==1){
      return ans;
   }   

   if (x == 2)
   {
      return ans;
   }
   if (x % 2 == 0)
   {
      return 0;
   }
   for (int i = sqrt(x); i > 0; i -= 2)
   {
      if (x % i == 0)
      {
         return 0;
      }
   }

   return ans;
}

int isStrong(int x){
   int num = x;
   int counter = 0;
   while(num!=0 && counter<x){
      counter = counter + factorial(num%10);
      num = num/10;
   }
   return counter==x;

}

int factorial(int n){
   int counter = 1;
   for(int i=2; i<=n; i++){
      counter = counter * i;
   }
   return counter;

}

int getMin(int x, int y){
    int ans;
    if(x<y){
        ans = x;
    }
    else
        ans = y;

   return ans;
}

int getMax(int x, int y){
    int ans;
    if(x<y){
        ans = y;
    }
    else
        ans = x;

   return ans;
}


