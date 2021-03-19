#include <stdio.h>

int main(){
	int cx,cy;
	int x,y;
	scanf("%d %d %d %d", &cx, &cy, &x, &y);
	for(int i=0; i<cx; i++){
		for(int j=0; j<x; j++,puts("")){
			for(int k=0; k<cy; k++){
				for(int l=0; l<y; l++){
					printf(i%2==k%2?"X":".");
				}
			}
		}
	}
	return 0;
}
