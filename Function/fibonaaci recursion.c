//write a c program to calculate the fibonaaci of a given number using recursion.
#include<stdio.h>
int fib(int x)
{
    if(x==0) return 0;
    if(x==1) return 1;
    else return fib(x-1)+fib(x-2);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d   ",fib(i));
    }
    return 0; 
}
