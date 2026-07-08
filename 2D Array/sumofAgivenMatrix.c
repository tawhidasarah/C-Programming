//Ques : Find the sum of a given matrix of n x m. 
#include<stdio.h>
int main()
{
    int r;
    printf("enter row number:");
    scanf("%d",&r);
    int c;
    printf("enter coloumn number:");
    scanf("%d",&c);
    int arr[r][c];
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
