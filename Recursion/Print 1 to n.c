//Print 1 to n
#include<stdio.h>
void num(int x)
{
    if(x==0) return;
    num(x-1);
    printf("%d  ",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    num(n);
    return 0;
}
