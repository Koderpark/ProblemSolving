#include <stdio.h>
 
int arr[10][10] = {0};
int max = 0;
 
int main(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &arr[i][j]);
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    int i,j;
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            if(max == arr[i][j]) goto end;
        }
    }
    end:
 
    printf("%d\n%d %d", max , i+1,j+1);
 
 
    return 0;
}

