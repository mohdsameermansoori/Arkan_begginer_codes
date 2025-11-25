#include<stdio.h>
int main ()
{
    int y ;
    printf("enter the year : ");
    scanf("%d", &y);
    if ( y % 4 == 0){
        if( y % 100 == 0){
            if( y % 400  == 0){
                printf("year is a leap year .\n");
            }else{
                printf("year is not a leap year.\n" );
            }
        }else{
            printf("year is a leap year . \n");
        }
    }else
    printf("year is not leap year .\n");
    return 0 ;

}