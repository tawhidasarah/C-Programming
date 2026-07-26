//print a series
#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        x=i*i;
        printf("%d ",x);
    }
    return 0;
}
