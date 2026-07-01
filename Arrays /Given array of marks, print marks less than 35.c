/*Ques: Given an array of marks of students, if the 
mark of any student is less than 35 print its roll 
number. [roll number here refers to the index of the 
array*/
#include<stdio.h>
int main()
{
    int marks[10]={91,40,70,86,30,56,27,67,32,29};
    for(int i=0;i<=9;i++)
    {
        if(marks[i]<35)
        {
             printf("%d\n",i);
        }
    }
    return 0;
}
