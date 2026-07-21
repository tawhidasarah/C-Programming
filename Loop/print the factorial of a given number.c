//Write a C program to print the factorial of a given number using loop.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=i*fact;
        if(n-3==i){
            printf("%d",i);
        }
        else{
            printf("%d x ",i);
        }
    }
    printf(" = %d",fact);
    return 0;
}
