//Write a C program to print the nth fibonacci number using loop.
#include <stdio.h>
int main()
{
    int n, c = 1;
    scanf("%d", &n);
    int i = 0, a = 0, b = 1;
    do
    {
        //printf("%d ", c);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    while (i < n - 1);
    printf("%d ", a);
    return 0;
}
