#include<stdio.h>
 
int main(){
    int n,m;
    scanf("%d %d", &n , &m);
     
    for(int i=0; i<n ; i++){
        for(int j=m; j>0 ; j--){
            printf("%d ", n*((m-1) + (j-m)) +i +1);
        }
        printf("\n");
    }
    return 0;
}
