//Largest of three numbers
#include<stdio.h>
int main()
{
    int a,b,c,largest;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c) largest=1;
    else if(b>=a&&b>=c) largest=2;
    else largest=3;
    switch(largest)
    {
    case 1:
        printf("%d is the largest",a);
        break;
    case 2:
        printf("%d is the largest",b);
        break;
    case 3:
        printf("%d is the largest",c);
        break;
    }
    return 0;
