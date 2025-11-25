#include <stdio.h>
int main()
{
    int a = 10 ,res ;
    res = a ++ ;
    printf("a is %d, res %d\n",a,res);
    res = a --;
    printf("a is %d , res %d\n",a,res);
    res = ++a ;
    printf("a is %d, res %d\n",a,res);
    res =--a ;
    printf ("a is %d, res%d\n",a,res);
    printf ("+a is %d\n",+a);
    printf ("-a is %d",-a);
    return 0;
}