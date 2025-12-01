#include<stdio.h>
int main ()
{
    int num ; 
    int factorial = 1;
    printf("enter the number:");
    scanf("%d",&num);

    if (num <0){
        printf("factorial not defined for negative numbers.\n");
    }
    else if (num ==0){
        printf("factorial of zero is 1.\n");
    }
    else{
        for (int i=1; i<=num; i++){
             factorial *= i ;
        }
        printf("the factorial of %d is %d.\n",num,factorial);
    }
    return 0 ;
}