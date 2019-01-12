#include <stdio.h>
 
int narr[10000000] = {0};
 
int main(){
    int n,m,a;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        narr[a] = 1;    
    }
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%d", &a);
        printf("%d ", narr[a]);
    }
}
