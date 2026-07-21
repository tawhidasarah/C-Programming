//Write a C program to print the fibonacci series up to a given number using loop.
#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int i=0,a=0,b=1;
    do{
        if(a<n){
        printf("%d ",a);
        }
        else{
            break;
        }
        c=a+b;
        a=b;
        b=c;
        i++;
        
    }
    while(i<n);
    return 0;
}
