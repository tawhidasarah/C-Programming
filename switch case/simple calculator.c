//simple calculator using switch case.
#include<stdio.h>
int main()
{
    int choice;
    float a,b;
    printf("enter the value of a and b:");
    scanf("%f%f",&a,&b);
    printf("enter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("%f+%f=%f\n",a,b,a+b);
        break;
    case 2:
        printf("%f-%f=%f\n",a,b,a-b);
        break;
    case 3:
        printf("%fX%f=%f\n",a,b,a*b);
        break;
    case 4:
        printf("%f/%f=%f\n",a,b,a/b);
        break;
    default:
        printf("invalid");
    }
    return 0;

}
