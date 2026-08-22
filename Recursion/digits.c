//digits of a number
#include<stdio.h>
int num(int n,int count)
{
    if(n==0) return count;
    else return num(n/10,count+1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("the digits of a number:%d",num(n,0));
    return 0;
    }
