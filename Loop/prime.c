//Write a program to check if a number is prime or not using a for loop.
#include<stdio.h>
int main()
{
    int n,flag;
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0)
        flag=0;
     
    }
    if(flag==0) printf("not prime");
    else printf("prime");
    return 0;
}
