#include <stdio.h>
int n;
int c = 0;
int f(int k, int jump){
    if(k == n) { c++; return 0;}
    if(k > n) return 0;
 
    f(k+1 , jump+1);
    f(k+2 , jump+1);
    if(jump >= 2) f(k+3 , 0);
}
int main(){
    scanf("%d", &n);
    f(0,2);
    printf("%d", c);
}
