#include<stdio.h>
 
int main(){
    int data[101][101] = {0};
    int n,m;
    int a = 0;
    scanf("%d %d", &n, &m);
     
    for(int s= n+m-1; s>= 0; s--){
        for(int i=0; i<n; i++){
            int j=s-i;
            if(j >= 0 && j < m){
                a++;
                data[i][j] = a;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
 	return 0;
}
