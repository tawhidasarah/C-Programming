//reverse a number using recursion.
#include<stdio.h>
int reversenumber(int n,int reverse)
{
    if(n==0) return reverse;
    else return reversenumber(n/10,reverse*10+n%10);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reversenumber(n,0));
    return 0;
}
