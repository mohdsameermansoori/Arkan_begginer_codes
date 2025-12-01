#include<stdio.h>
int main()
{
    int arr[3][2]={{10,20},{30,40},{50,60}};
    printf("2D transversal array\n");
    for(int i=0; i<3; i++ ){
        for(int j=0; j<2; j++){
            printf("arr [%d] [%d] : %d   ",i,j ,arr[i][j]);
        }
        printf("\n");
    }
    return 0 ;
} 