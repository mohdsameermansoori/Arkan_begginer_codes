#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main()
{
    int a,b,result;

    printf("enter the first number:");
    scanf("%d",&a);

    printf("enter the second number:");
    scanf("%d",&b);

    result = sum(a, b);

    printf("the sum two numbers are :%d\n",result);
    
    return 0;
}