#include<stdio.h>
void printarr(int arr[5],int n ){
    for(int i=0; i<5; i++)
    printf("%d\n",arr[i]);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    printarr(arr,5);
    return 0;
}