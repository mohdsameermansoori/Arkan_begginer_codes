#include<stdio.h>
int main ()
{
    int a = 10 , b = 20 ;
    if (!( a > 0 && b > 0 )){
        printf ("both of values are greater than 0.\n");
    }
    else{
        printf("both of values are less than 0. \n");
    }
    return 0;

}