//write a c program to search for an element in an array
#include<stdio.h>
int main()
{
    int n,x,temp=0;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element that you want to search:");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            temp=1;
            printf("Element found at index %d and which is %d",i,arr[i]);
        }
    }
    if(temp==0){
       printf("element not found");}
    return 0;
}
