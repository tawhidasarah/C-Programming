//Write a C program to concatenate two strings with and without strcat() function.
//With strcat() function:
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Hello ";
    char str2[]="World";
    strcat(str1,str2);
    printf("Concatenated=%s",str1);
    return 0;
}
//Without strcat() function:
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50]="Hello ";
    char str2[]="World";
    int i=0,len=0,j=0;
    while(str1[i]!='\0'){
        i++;
        len++;
    }
    while(str2[j]!='\0'){
        str1[len+j]=str2[j];
        j++;
    }
    printf("%s",str1);
    return 0;
}
