#include <stdio.h>
 
int main(){
    int n;
    int k[1001] = {0};
     
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &k[i]);
     
    for(int i=0; i<n; i++){
        printf("%d: ", i+1);
        for(int j=0; j<n; j++){
            if( i == j ) continue;
            printf("%c ", k[i] > k[j] ? '>' : (k[i] == k[j] ? '=' : '<'));
        }
        printf("\n");
    }
    return 0;
}
