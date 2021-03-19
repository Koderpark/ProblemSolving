#include <stdio.h>

int black[110];
int max(int a, int b){return a>b?a:b;}

int main(){
	int n,m;
	int ans;
	int sum;
	
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d", &black[i]);
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				sum = black[i]+black[j]+black[k];
				if(sum <= m) ans = max(ans, sum);
			}
		}
	}
	printf("%d", ans);
}
