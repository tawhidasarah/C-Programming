//Write a program to read and display the contents of a file.
#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("test.txt","r");
    char str[100];
    if(file==NULL){
        printf("file doesn't exist");
    }
    else{
        printf("file opened.\n");
        while(fgets(str,sizeof(str),file)!=NULL){
            printf("%s",str);
        }
    }
    fclose(file);
    return 0;
}
