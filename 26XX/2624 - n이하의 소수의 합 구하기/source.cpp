#include <stdio.h>
 
int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        int a = 0;
        for(int j=2; j<i; j++){
            if(i % j == 0) a = 1;
        }
        if(a == 0){
            sum += i;
        }
    }
    printf("%d", sum);
}
