/*Calculate the product of all the elements in the given array.*/ 
 #include<stdio.h>
int main()
{
    int arr[5]={4,6,5,8,9};
    int product=1;
    for(int i=0;i<=4;i++)
    {
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}
