//Write a C program to find the sum and average of n numbers entered by the user.
#include<stdio.h>
int main()
{
    int n, num;
    scanf("%d",&n);
    int sum = 0;
    float average = 1;

    for(int i = 0; i < n; i++){
        scanf("%d",&num);
        sum = sum + num;
    }

    average = (float)sum / n;
    printf("Summation = %d\n", sum);
    printf("Average value = %f\n", average);
    return 0;
}
