#include<stdio.h>
int main(){
    int sum = 0;
    int n;
    int arr[50];
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    float average = (float)sum / n;

    printf("The sum is %d\n",sum);
    printf("The sum is %.2f",average);

    return 0;
}