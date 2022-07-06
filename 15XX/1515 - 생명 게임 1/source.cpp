#include <stdio.h>

int arr[30][30] = {0};
int arr2[30][30] = {0};

int check(int i, int j){
	int plus = arr[i+1][j] + arr[i][j+1] + arr[i-1][j] + arr[i][j-1] + arr[i+1][j+1] + arr[i-1][j-1] + arr[i-1][j+1] + arr[i+1][j-1] ;
    if(plus == 3) arr2[i][j] = 1;
    if(plus == 2) arr2[i][j] = arr[i][j]; 
    if(plus >= 4 || plus <= 1) arr2[i][j] = 0;    
    return 0;
}

int main(){
     
    for(int i=1; i<=25; i++){
        for(int j=1; j<=25; j++){
            scanf("%d", &arr[i][j]);
        }
    }
 
    for(int i=1; i<=25; i++){
        for(int j=1; j<=25; j++){    
            check(i,j);
        }
 
    }
     
    for(int i=1; i<=25; i++){
        for(int j=1; j<=25; j++){
            printf("%d ", arr2[i][j]);          
        }
        printf("\n");       
    }
    return 0;
}
