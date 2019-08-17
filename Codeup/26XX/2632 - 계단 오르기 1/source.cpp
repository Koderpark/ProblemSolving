#include <stdio.h>
int n;
int f(int k){
    if(k >= n) return 1;
    return f(k+1) + f(k+2);
}
int main(){
 
    scanf("%d", &n);
    printf("%d", f(1));
}
