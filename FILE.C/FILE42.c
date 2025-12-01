#include<stdio.h>
int add(int a ,int b){
    return a +b ;
}
int main ()
{
    int result = add(5,3);
    printf("the sum of the number is: %d",result);
    return 0 ;
}