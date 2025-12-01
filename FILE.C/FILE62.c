#include<stdio.h>
int main()
{
    int N=4;
    int *ptr1,*ptr2;
    ptr1 = &N;
    ptr2 = &N;
    printf("pointer ptr2 before substration :");
    printf("%p \n",ptr2);
    ptr2 = ptr2-3;
    printf("pointer ptr2 after substration :");
    printf("%p \n",ptr2);
    return 0;


}