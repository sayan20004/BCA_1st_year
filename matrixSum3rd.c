#include<stdio.h>
int main(){
	int arr[3][3];
	int brr[3][3];
	
	int i,j,sum=0;
	
	//array 1
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("arr[%d][%d] - ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//array 2
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("brr[%d][%d] - ",i,j);
			scanf("%d",&brr[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			sum = 0;
			sum = sum + (arr[i][j] + brr[i][j]);
			printf("arr[%d][%d] + brr[%d][%d] = %d\n",i,j,i,j,sum);
		}
		printf("\n");	
	}
	
	return 0;
}
