#include <stdio.h>
int main(){
    int n; 
    float sum = 0.0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
      sum = sum + (1.0/i);
    }

    printf("The sum is : %.2lf",sum);

    return 0;
}