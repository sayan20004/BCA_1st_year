#include<stdio.h>
int main(){
	int arr[50] = {6,7,8,10,12};
	int size = 6;
	
	int start = 0;
	int end = size - 1;
	int mid, target,index,isFound = 0;
	
	printf("Enter the target : ");
	scanf("%d",&target);
	
	while(start <= end){
		mid = (start + end)/2;
		if(arr[mid]==target){
			index = mid;
			isFound = 1;
			break;
		}
		else if(target < arr[mid]){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}	
	}
	if(isFound == 1){
		printf("Target found at %d",index);
	}
	else{
		printf("Target is not found");
	}
	
	return 0;
}
