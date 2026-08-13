//write a c program to calculate the factorial of a given number using a fuction.
#include<stdio.h>
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=fact(n);
    printf("Factorial of 5 is %d",result);
    return 0; 
}
