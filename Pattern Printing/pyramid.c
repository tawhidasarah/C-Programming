//print a pyramid pattern
//    * 
//   * * 
//  * * * 
// * * * * 
#include<stdio.h>
int main()
{
    int n,x=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //x=1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
            
        }
        printf("\n");
    }
    return 0;
}
