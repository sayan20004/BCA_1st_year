#include<stdio.h>
int main(){

    int previous = 0, next = 1, fibonacci = 0;
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    printf("%d %d",previous,next);
    for(int i = 0; i < n - 2; i++){
        fibonacci = previous + next;
        printf(" %d ",fibonacci);
        previous = next;
        next = fibonacci;
    }
    return 0;
}