//write a program to replace a character in a string with another character.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Banana";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'){
            str[i]='o';
        }
        i++;
    }
    printf("%s",str);
    return 0;
}
