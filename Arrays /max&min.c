/*Ques : write a c program to find max and minimum value in an array*/
#include<stdio.h>
int main()
{
    int arr[7]={3,6,7,-8,9,10,4};
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<=6;i++){
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Max=%d\n",max);
    printf("Min=%d",min);
    return 0;
}
