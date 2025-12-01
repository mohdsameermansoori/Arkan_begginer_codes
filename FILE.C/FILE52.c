#include<stdio.h>
void swap(int *a ,int *b ){
    int temp = *a;
    *a = *b ;
    *b = temp ;

}
int main ()
{
    int a,b ;
    printf("enter two no :");
    scanf("%d %d",&a,&b);
    swap (&a,&b);
    printf("Values after swap funtion are : %d %d",a,b);
    return 0 ;
    
}