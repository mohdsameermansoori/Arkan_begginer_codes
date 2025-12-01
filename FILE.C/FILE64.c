#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr1 = arr;
    int *ptr2 = &arr[0];
    if(ptr1 == ptr2){
        printf("pointer to the array name are equal");
    }
    else{
        printf("pointer to array name are not equal ");
        return 0;
    }

}