#include<stdio.h>
int array[101][101];
int main(){
    int a;
    int data = 0;
     
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        if(i % 2 == 1){//아래로 
            for(int j=0; j<a; j++){
                data++;
                array[j][i] = data;
                 
            }
        }else if(i % 2 == 0){//역순 
            for(int j= a-1; j>-1; j--){
                data++;
                array[j][i] = data;
                 
            }
        }
 
    }
     
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    } 
    return 0;
}
