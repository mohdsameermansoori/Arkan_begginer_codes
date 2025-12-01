#include<stdio.h>
void increment (int *num){
    (*num)++;
    printf("%d\n",*num );
}
int main ()
{
    int num = 5 ;
    increment(&num);
    printf("%d\n",num);
    return 0;

}