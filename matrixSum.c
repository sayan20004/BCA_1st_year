#include<stdio.h>
int main(){
    int row = 3, col = 3,sum = 0;
    int arr[3][3] = {{1,2,3}
                    ,{4,5,6}
                    ,{7,8,9}};

    printf("The row wise sum is - ");
    for(int i = 0; i < row; i ++){
        for(int j = 0; j< col; j ++){
            sum = sum + arr[i][j];
        }
        printf("%d ",sum);
    } 
    printf("\nThe sum of materix is %d",sum);
    return 0;
}