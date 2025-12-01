#include<stdio.h>
int main ()
{
    int *ptr1;
    char *ptr2;
    printf("%zu\n",sizeof(ptr1));
    printf("%zu",sizeof(ptr2));
    return 0 ;
}
//pointers are depends on bit of system 
//64 bit = 8 byte.
