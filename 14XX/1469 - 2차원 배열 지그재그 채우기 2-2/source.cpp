#include<stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(i % 2 == 1){
            for(int j=0; j<n; j++){
                printf("%d ", j + i * n + 1);
            }
        }
        else{
            for(int j=n; j>0; j--){
                printf("%d ", j + i * n);
            }
        }
        printf("\n");
    }
    return 0;
}
