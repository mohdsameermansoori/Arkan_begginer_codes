#include<stdio.h>
void printarr(int arr [],int n ){
    for(int i =0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}
int main ()
{
    int arr []={1,2,3,4,5,6};
    printarr(arr,6);
    return 0 ;
}