#include <stdio.h>

int main(){
	int n,max=0,sum=0;
	int k[5001][6];
	scanf("%d", &n);
	for(int i=0; i<n; i++)for(int j=0; j<6; j++)scanf("%d", &k[i][j]);
	for(int i=0; i<6; i++){
		for(int j=0; j<n; j++)if(max < k[j][i]) max=k[j][i];
		sum+=max;
		max=0;
	}
	printf("%d", sum);
	return 0;
}
