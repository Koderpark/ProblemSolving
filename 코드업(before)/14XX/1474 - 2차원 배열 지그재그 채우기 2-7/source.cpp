#include<stdio.h>
 
int array[101][101];
int main(){
    int x,y;
    scanf("%d %d", &y, &x);
    int data = x*y;
    for(int i=x-1; i>-1; i--){
        if(i % 2 == 1){//감소 
            for(int j=0; j<y; j++){
                array[j][i] = data--;
            }
        }else if(i % 2 == 0){//증가 
            for(int j=y-1; j>-1; j--){
                array[j][i] = data--;
            }
        }
    }
    for(int i=y-1; i>-1; i--){
        for(int j=x-1; j>-1; j--){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
} 
