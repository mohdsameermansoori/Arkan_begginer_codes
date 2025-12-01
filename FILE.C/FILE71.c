#include<stdio.h>
void swap(int *a,int *b){
    int vocal;
    vocal=*a;
    *a=*b;
    *b=vocal;
}
int main()
{
    int a, b ;
    printf("Enter The First Number :");
    scanf("%d",&a);
    printf("Enter The Second Number :");
    scanf("%d",&b);
    printf("Before Swapping ,a=%d,b=%d\n",a,b);
    swap( &a , &b );
    printf("After Swapping ,a=%d,b=%d\n",a,b);
    return 0;


}