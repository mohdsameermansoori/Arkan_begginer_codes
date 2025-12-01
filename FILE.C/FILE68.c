#include<stdio.h>
void changevalue(int x){
    x = 100;
}
int main (){
    int a =10;
    printf("before function calling , a is %d\n",a);
    changevalue(a);
    printf("after function calling , a is %d\n",a);
    return 0;
}
