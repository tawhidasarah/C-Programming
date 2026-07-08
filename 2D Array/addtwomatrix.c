//Ques: Write a program to add two matrices. 
#include<stdio.h>
int main()
{
    int r;
    printf("enter row number:");
    scanf("%d",&r);
    int c;
    printf("enter coloumn number:");
    scanf("%d",&c);
    int res[r][c];
    int arr[r][c];
    int brr[r][c];
    printf("Enter first Matrix:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter second Matrix:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           res[i][j]=arr[i][j]+brr[i][j];
           printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
