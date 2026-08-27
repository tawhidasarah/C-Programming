//to check even or odd
#include<stdio.h>
int main()
{
    int n,type;
    scanf("%d",&n);
    if(n%2==0) type=1;
    else type=2;
    switch(type)
    {
    case 1:
        printf("even");
        break;
    case 2:
        printf("odd");
        break;
    }

    return 0;

}
