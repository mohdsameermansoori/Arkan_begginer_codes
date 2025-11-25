#include<stdio.h>
int main ()
{
    int y ;
    printf("enter the year: ");
    scanf("%d", &y);
    if (( y % 400 == 0 ) || ( y % 4 == 0 &&  y % 100 != 0 ))
    printf("year is a leap year .\n ");
    else
    printf("year is not a leap year.\n");
    return 0;

}