//write a c program to print all prime numbers between 1 to n using loop.
#include<stdio.h>
int main()
{
    int n,flag,j,i;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
            flag=1;
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
        printf("%d ",i);
    }
    }
    return 0;
}
