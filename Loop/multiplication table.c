//Write a C program to print the multiplication table of a given number using loop.
#include<stdio.h>
int main()
{
    int n, d, mul;
    scanf("%d %d", &n, &mul);
    for(int i = 1; i <= n; i++)
    {
        int d = mul * i;
        printf("%d x %d = %d\n", mul, i, d);
    }
    return 0;
}
