//write a c program to sort an acsending order of an array using a pointer.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(ptr+i)>*(ptr+j)){
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
