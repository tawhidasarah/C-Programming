//Write a C program to check if two strings are equal or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter 1st string= ");
    fgets(str1,50,stdin);
    printf("Enter 2nd string= ");
    fgets(str2,50,stdin);
    int d=strcmp(str1,str2);
    if(d==0){
        printf("strings are equal");
    }
    else{
        printf("strings are not equal");
    }
    return 0;
}
