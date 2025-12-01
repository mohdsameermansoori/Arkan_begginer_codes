#include<stdio.h>
void swap(int a ,int b ){
    int temp = a;
    a = b ;
    b = temp ;

}
int main ()
{
    int a=10,b =50;
    swap (a,b);
    printf("Values after swap funtion are : %d %d",a,b);
    return 0 ;
    
}