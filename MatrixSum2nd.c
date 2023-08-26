#include<stdio.h>
int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int brr[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
	int i,j,sum=0;
	
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			sum = 0;
			sum = sum + (arr[i][j] + brr[i][j]);
			printf("%d ",sum);
		}
		printf("\n");	
	}
	
	return 0;
}
