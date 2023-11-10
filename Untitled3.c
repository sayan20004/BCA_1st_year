#include<stdio.h>
#include<string.h>
int main(){
	char str[50], l;
	int count = 0, i;
	printf("Enter string : ");
	gets(str);
	
	for(l = 'a'; l <= 'z'; l++){
		count = 0;
		
		for(i = 0; str[i] != '\0'; i++){
			if(l == str[i]){
				count++;
			}
		}
		if(count > 0){
			printf("\n%c : %d",l,count);
		}
	}
}
