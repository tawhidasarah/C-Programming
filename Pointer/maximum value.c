//write a c program to find maximum value of an array using pointer.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p;
    p=&arr[0];
    int max=*p;
    for(int i=0;i<n;i++){
        if(max<*(p+i)){
            max=*(p+i);
        }
    }
    printf("Max=%d",max);
    return 0;
}
