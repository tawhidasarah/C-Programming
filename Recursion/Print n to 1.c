//Print n to 1 using recursion.
#include<stdio.h>
int num(int x)
{    
    printf("%d  ",x);

    if(x==1) return 1;
    else return num(x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    num(n);
    return 0;
}
