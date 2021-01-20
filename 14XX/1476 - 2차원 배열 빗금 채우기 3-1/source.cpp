#include <stdio.h>
 
int array[101][101] = {0};
 
int main(){
    int n,m,a=0;
    scanf("%d %d", &n, &m);
 
    for(int i=0; i<n+m; i++){
        for(int j=0; j<m; j++){
            if(i-j >= 0 && i-j < n){
                array[i-j][j] = ++a;
            }
        }
    }   
     
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
     
     
    return 0;
}
