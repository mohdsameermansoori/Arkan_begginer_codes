#include<stdio.h>
int main()
{
    int X = 6;
    int N = 4;
    int *ptr1,*ptr2;
    ptr1 = &X;
    ptr2 = &N;
    printf("ptr1 = %p , ptr2 = %p\n",ptr1,ptr2);
    X = ptr1 - ptr2; 
    printf("substration of ptr1 " " & ptr2 is %d\n",X);
    return 0;



}