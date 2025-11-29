#include<stdio.h>
int main ()
{
    int i = 1 ;
    loop :
    if (i<=5){
        if(i==3){
            goto end ;
        }
        printf("%d",i);
        i++;
        goto loop;
    }
    end:
    printf("\n exited using goto");
    return 0 ;

}