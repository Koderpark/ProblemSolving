#include<stdio.h>
 
int main(){
    int n,m;
    scanf("%d %d", &n , &m);
     
    for(int i=n; i>0; i--){
        for(int j=0; j<m; j++){
            printf("%d ", n*(m-j) + i - n);
        }
        printf("\n");
    }
    return 0;
}
