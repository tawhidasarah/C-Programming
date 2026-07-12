//Write a C program to reverse a string without using strrev() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    fgets(str,sizeof(str),stdin);
    int i=0,len=0,temp=0;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    for(i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("%s",str);
    return 0;
}
