#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int n,i,j;
int maxdp[2][5] = {0};
int mindp[2][5] = {0};
int input[100001][5] = {0};
int maxsum = -1;
int minsum = 1234567;


int main(){
	scanf("%d", &n);
	for(i=0; i<n; i++) for(int j=1; j<=3; j++) scanf("%d", &input[i][j]);
	
	for(i=1; i<=3; i++){
		maxdp[0][i] = input[0][i];
		mindp[0][i] = input[0][i];
	}
	
	for(i=0; i<n; i++){
		mindp[i%2][0] = mindp[i%2][4] = 1234567;
		for(j=1; j<=3; j++){
			maxdp[(i+1)%2][j] = MAX(MAX(maxdp[i%2][j+1], maxdp[i%2][j-1]), maxdp[i%2][j]) + input[i+1][j];
			mindp[(i+1)%2][j] = MIN(MIN(mindp[i%2][j+1], mindp[i%2][j-1]), mindp[i%2][j]) + input[i+1][j];
		}
	}
	for(i=1; i<=3; i++){
		maxsum = MAX(maxsum, maxdp[n%2][i]);
		minsum = MIN(minsum, mindp[n%2][i]);
	}
	printf("%d %d", maxsum, minsum);
	return 0;
}
