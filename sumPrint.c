#include <stdio.h>
int main(){
    int n = 10;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    printf("%d",sum);
    
    return 0;
}