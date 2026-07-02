//Ques : Find the total number of pairs in the Array whose sum is equal to the given value x. 
#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int x=5;
    int totalpairs=0;
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i] + arr[j] == x){
                totalpairs++;
            }
        }
    }
    printf("The total number of pairs is %d",totalpairs);
    return 0;
}
