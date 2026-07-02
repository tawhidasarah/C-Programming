/*write a c program to find the average value of an array*/
#include<stdio.h>
int main()
{
    int arr[5]={5,7,7,3,4};
    int sum=0;
    for(int i=0;i<=4;i++)
    {
        sum=sum+arr[i];
    }
    float avg;
    avg=(float)sum/5;
    printf("The average value is %f",avg);
    return 0;
}
