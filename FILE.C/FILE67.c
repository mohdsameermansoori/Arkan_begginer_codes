#include<stdio.h>
int main (){
    int num , i ,sum=0 ;
    printf("ENTER THE NUMBER :");
    scanf("%d",&num);

    for(int i=0; i<=num; i++){
        sum += i;
    }
    printf("SUM OF NUMBERS FROM 1 TO %d = %d\n",num,sum);
    return 0;
}