//Write a C program to find the length of a string without using the strlen() function.
#include<stdio.h>
int main()
{
    char str[]="Hello World";
    int i=0,len=0;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    printf("Length= %d",len);
    return 0;
}
