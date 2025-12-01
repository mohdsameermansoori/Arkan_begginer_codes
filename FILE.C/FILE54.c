#include<stdio.h>
int add(int *a,int *b ){
    return *a + *b ;
}
int main ()
{
    int a,b;
    printf("enter the number :");
    scanf("%d %d",&a,&b);
    int result = add(&a, &b);
    printf("the sum of the numbers is : %d",result);
    return 0 ;

}