#include <stdio.h>
#include <algorithm>

int input[100001] = {0};

int main(){
	int n,m,a,b;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d", &input[i]);
	std::sort(input, input+n);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		printf("[");
		for(int j=a; j<=b; j++) printf("%d ", input[j-1]);
		printf("]\n");
	}
}
