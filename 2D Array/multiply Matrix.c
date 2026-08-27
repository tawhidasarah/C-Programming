//wcp to check if array1 and array2 can be multiplied if it is possible.then multiply the two arrays and show them in a result array
#include<stdio.h>
int main()
{
    int r1,c1;
    printf("enter row and coloumn of 1st matrix:");
    scanf("%d%d",&r1,&c1);
    int r2,c2;
    printf("enter row and coloumn of 2nd matrix:");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("multiplication error");
    }
    int arr1[r1][c1],arr2[r2][c2],result[r1][c2];
    printf("enter 1st matrix:");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    printf("enter 2nd matrix:");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    //multiplication process
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=0;
            for(int k=0;k<c1;k++){
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("result matrix:");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
