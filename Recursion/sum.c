//print sum from 1 to n
#include<stdio.h>
int sum(int x)
{
    if(x==0) return 0;
    else return x + sum(x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Sum=%d",sum(n));
    return 0;
}
