//find out the maximum and minimum element and index in a 2D array.
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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int max_row=0,max_coloumn=0;
    int min=arr[0][0];
    int min_row=0,min_coloumn=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
               max=arr[i][j];
               max_row=i;
               max_coloumn=j;
            }
            if(min>arr[i][j]){
               min=arr[i][j];
               min_row=i;
               min_coloumn=j;
            }
        }
    }
    printf("Maximum array element: %d ,and index:(%d,%d)\n",max,max_row,max_coloumn);
    printf("Minimum array element: %d ,and index:(%d,%d)",min,min_row,min_coloumn);
    return 0;
}
