//LCM using a function
#include<stdio.h>
int GCD(int a,int b)
{
    int rem=1;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int LCM(int a,int b)
{
    return (a*b)/GCD(a,b);
    
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("The LCM of %d and %d is %d",x,y,LCM(x,y));
    return 0;
}
