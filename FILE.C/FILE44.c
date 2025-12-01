#include<stdio.h>
int add(int a ,int b){
    return a +b ;
}
int main ()
{
    int a,b;
    printf("enter the no:");
    scanf("%d %d",&a,&b);
    int result = add(a,b);
    printf("the sum of the number is: %d",result);
    return 0 ;
}