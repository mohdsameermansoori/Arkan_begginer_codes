#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr = (int*)malloc(sizeof(int));
    free(ptr);
    printf("memory freed\n");
    ptr = NULL;
    return 0 ;
}