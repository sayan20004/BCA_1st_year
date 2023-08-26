#include<stdio.h>
int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int brr[3][3];
	int i,j,sum=0;
	
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			arr[i][j] = brr[j][i];
		}	
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ",brr);
		}
		printf("\n");	
	}
	
	return 0;
}
