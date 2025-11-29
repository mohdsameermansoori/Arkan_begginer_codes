#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    for (int i=0; i<=4; i++){
        printf("%d ",arr[i]);
         if(i==2){
            break;
        }
    }
    return 0;


}