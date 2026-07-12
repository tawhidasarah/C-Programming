//write a c program to remove all spaces from a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter the string: ");
    fgets(str,50,stdin);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}
