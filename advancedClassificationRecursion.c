#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int isPalindrome(int n){
    int tmp = PalindromeRec(n,0);
    return tmp == n;
    
}

int PalindromeRec(int n, int k){
    if(n==0){
        return k;
    }
    k = (k*10) + (n%10);
    return PalindromeRec(n/10, k);
}

int findDig(int x){
    int dig = 0;
    while(x!=0){
        dig++;
        x = x/10;
    }
    return dig;
}

int isArmstrong(int n){
    int numOfDigits = findDig(n);
    int ans = isArmstrongRec(n,numOfDigits);
    return ans == n;

}

int isArmstrongRec(int n, int d){
    if(n==0){
        return 0;
    } 
    else  
    return (pow(n%10,d) + isArmstrongRec(n/10,d) );
    
}




