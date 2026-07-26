//print a reverse pyramid pattern
 // * * * * 
 //  * * * 
 //   * * 
 //    * 
#include<stdio.h>
int main()
{
    int n,x=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //x=1;
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=n-i;k++){
            printf("* ");
            
        }
        printf("\n");
    }
    return 0;
}
