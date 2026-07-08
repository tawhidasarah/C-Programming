//write a c program to find the middle index of an array
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    if(n%2==0){
         printf("Middle index= %d,%d",arr[(n/2)-1],arr[n/2]);
    }
    else{
         printf("Middle index= %d",arr[n/2]);
    }
    return 0;
}
