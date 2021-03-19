#include <stdio.h>

char txt[101][201] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", &txt[i]);
		printf("%s\n", txt[i]);
		if(i < n-1) printf("AMOLED\n");
	}
}
