#include <stdio.h>
 
int main(){
    int a[5];
    int i,j;
    int max;
    int mid;
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
 
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            if(a[j] < a[j+1]){mid = a[j+1]; a[j+1] = a[j]; a[j] = mid;}
 
        }
    }
    printf("%d", a[2]);
	return 0;
}

