//Write a C program to count the number of vowels and words in a string. 
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("Enter a Sentence: ");
    fgets(ch,50,stdin);
    int i=0,vowel=0,word=1;
    while(ch[i]!='\0'){
        if(ch[i]=='A'||ch[i]=='I'||ch[i]=='E'||ch[i]=='O'||ch[i]=='U'||ch[i]=='a'||ch[i]=='i'||ch[i]=='o'||ch[i]=='e'||ch[i]=='u'){
            vowel++;
            
        }
        if(ch[i]==' '){
            word++;
        }
        
        i++;
    }
    printf("Number of vowels: %d\n",vowel);
    printf("Number of words: %d\n",word);
    return 0;
}
