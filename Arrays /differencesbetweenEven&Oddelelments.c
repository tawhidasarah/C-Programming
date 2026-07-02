//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int sum1=0;
    int sum2=0;
    for(int i=0;i<=6;i++){
        if(i%2==0){
           sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
    }
    printf("The sum of even indexes= %d\n",sum1);
    printf("The sum of odd indexes= %d\n",sum2);
    int diff=sum1 - sum2;
    printf("the defferences between the sum of even and odd numbers is %d ",diff);
    return 0;
}
