/*write a c program to calculate summation,subtraction,multiplication and division using user defined
funtion*/
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("The Summation is %d\n",sum(x,y));
    printf("the Subtraction is %d\n",sub(x,y));
    printf("the Multiplication is %d\n",mul(x,y));
    printf("the division is %.2f\n",div(x,y));
    return 0;
}
