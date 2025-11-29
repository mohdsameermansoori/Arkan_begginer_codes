#include<stdio.h>
int main ()
{
    int arr[5]={1,2,3,4,5};
    printf("the size of array ");
    int size =sizeof (arr)/sizeof (arr[0]);
    printf("%d ",size);
    return 0 ;
}