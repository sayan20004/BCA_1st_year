#include <stdio.h>
int main(){
    int n = 100;
    for(int i = n; i >= 1; i--){
        if(i % 2 == 0){
            printf("%d ",i);
        }
    }
    
    return 0;
}