#include <stdio.h>
 
int main(){
    int m,n,k =0;
    int sum = 0;
    int minimum = 0;
    scanf("%d %d", &m, &n);
    for(int i=m; i<=n; i++){
        int a = 0;
        for(int j=2; j<i; j++){
            if(i % j == 0) a = 1;
        }
        if(i != 1 && a == 0){sum += i; if(k == 0){ minimum = i; k=1; }}
 
    }
    printf("%d\n%d", sum, minimum);
}

