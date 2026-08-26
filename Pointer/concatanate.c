//concatanate
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[50];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    char *ptr1;
    ptr1=&str1[0];
    char *ptr2=&str2[0];
    int i=0,j=0,len=0;
    while(*(ptr1+i)!='\0'){
        len++;
        i++;
    }
    while(*(ptr2+j)!='\0'){
        *(ptr1+(len+j))=*(ptr2+j);
        j++;
    }
    *(ptr1+(len+j)) =  '\0';
    printf("%s",str1);
    return 0;
}
