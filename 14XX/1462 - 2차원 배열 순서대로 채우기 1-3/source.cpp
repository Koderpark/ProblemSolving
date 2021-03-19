#include<stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", i+1 + j * n);
        }
        printf("\n");
	}
    return 0;
} 
