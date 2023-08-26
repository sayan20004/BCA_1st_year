#include<stdio.h>
int main(){
    int row = 3, col = 3,product = 1;
    int arr[3][3] = {{1,2,3}
                    ,{4,5,6}
                    ,{1,2,1}};

    printf("The row wise product is - ");
    for(int i = 0; i < row; i ++){
        for(int j = 0; j< col; j ++){
            product = product * arr[i][j];
        }
        printf("%d ",product);
    } 
    printf("\nThe multiplication of materix is %d",product);
    return 0;
}