#include<stdio.h>
 
int main(){
    int n,m;
    scanf("%d %d", &n , &m);
    int i,j;
    for(i=n;i>0;i--){
        for(j=1;j<=m;j++){
            printf("%d ", i*m+j-m);
        }
        printf("\n") ;
    }
    return 0;
}
