//write a c program to calculate the factorial of a given number using recursion.
#include<stdio.h>
int fact(int x)
{
    if(x==1) return 1;
    else{
        return x*fact(x-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int result=fact(n);
    printf("Factorial of %d is %d",n,result);
    return 0; 
}
