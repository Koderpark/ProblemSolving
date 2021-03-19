#include<stdio.h>
 
int array[101][101];
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    int data = x*y;
    for(int i=x-1; i>-1; i--){
        if(i % 2 == 1){//감소 
            for(int j=0; j<y; j++){
                array[i][j] = data--;
            }
        }else if(i % 2 == 0){//증가 
            for(int j=y-1; j>-1; j--){
                array[i][j] = data--;
            }
        }
    }
     
    for(int i=x-1;i>-1; i--){
        for(int j=0; j<y; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
} 
