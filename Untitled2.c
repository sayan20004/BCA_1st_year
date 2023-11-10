#include<stdio.h>
#include<string.h>
int main(){
	int i, count = 0, lenght;
	char str[50];
	printf("Enter string : ");
	gets(str);
	lenght = strlen(str);
	
	for(i = 0; i < lenght; i++){
		if(str[i] == 'a' ||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
			count++;
		}
	}
	
	printf("vowels : %d",count);
	return 0;
}
