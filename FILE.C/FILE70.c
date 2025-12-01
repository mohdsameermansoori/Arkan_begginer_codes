#include<stdio.h>
int main ()
{
    char value;
    float num1,num2;
    printf("enter operator (+,-,*,/):");
    scanf("%c",&value);
    printf("enter two number :");
    scanf("%f %f" ,&num1,&num2);
    switch(value){
        case'+':
          printf("result =%.2f\n", num1 + num2);
          break;
        case'-':
          printf("result =%.2f\n",num1-num2);
          break;
        case'*':
          printf("result =%.2f\n",num1*num2);
          break;
        case'/':
          if(num2 !=0)
            printf("reslut =%.2f\n",num1/num2);
          else
            printf("error division by zero\n");
          break;
        default:
           printf("invalid syntax operator\n");      
    }
    return 0;
}