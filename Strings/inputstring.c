//Write a C program to input a string from the user and display it on the console. 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    fgets(str,50,stdin);
    puts(str);
    return 0;
}
