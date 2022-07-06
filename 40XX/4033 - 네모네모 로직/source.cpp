#include <stdio.h>
 
int n, k, m[15];
int f(int l, int i, int p){
    if(l == n && i == k) return 1;
    if(l >= n) return 0;
    if(i == k || p == 1) return f(l + 1, i, 0);
    return f(l + 1, i, 0) + f(l + m[i], i+1, 1);
 
}
 
 
 
int main(){
 
    scanf("%d %d",&n, &k);
    for(int i = 0; i < k; i++)scanf("%d",&m[i]);
 
    printf("%d", f(0, 0, 0));
}

