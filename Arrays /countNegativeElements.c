/*write a program to count negative elements in an array*/
#include<stdio.h>
int main()
{
    int arr[5]={2,-7,-10,5,7};
    int count=0;
    for(int i=0;i<=4;i++)
    {
        if(arr[i]<0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}
