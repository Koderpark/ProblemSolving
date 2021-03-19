#include <stdio.h>
 
int array[101][101] = {0};
 
int main(){
    int n;
    int a=1;
    scanf("%d", &n);
     
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            for(int j=0; j<n; j++){
                array[i][j] = a++;
            }
        }else{
            for(int j=n-1; j>=0; j--){
                array[i][j] = a++;
            }
        }
    }
     
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}
