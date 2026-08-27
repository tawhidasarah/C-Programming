//leap year or not.
#include<stdio.h>
int main()
{
    int n,type;
    scanf("%d",&n);
    if((n%400==0)||((n%4==0)&&(n%100!=0))) type=1;
    else type=2;
    switch(type)
    {
    case 1:
        printf("leap year");
        break;
    case 2:
        printf("not leap year");
    }
    return 0;
}
