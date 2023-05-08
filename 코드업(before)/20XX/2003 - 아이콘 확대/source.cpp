#include <stdio.h>

char arr[4][4] = {
	"*x*",
	" xx",
	"* *"
};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<3; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<3; k++){
				for(int l=0; l<n; l++){
					printf("%c", arr[i][k]);
				}
			}
			printf("\n");
		}
	}
}
