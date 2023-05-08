#include<stdio.h>
 
int main(){
    int n,m;
    scanf("%d %d", &n , &m);
     
    int a = n*m;
     
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ; j++){
            printf("%d ", a--);
        }
        printf("\n"); 
    }
    return 0;
} 
