#include <stdio.h>

int w[101] = {0};
int h[101] = {0};

int main(){
	int n,cnt;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d %d", &w[i], &h[i]);
	
	for(int i=0; i<n; i++){
		cnt = 1;
		for(int j=0; j<n; j++){
			if(i == j) continue;
			if(w[i] < w[j] && h[i] < h[j]) cnt++;
		}
		printf("%d ", cnt);
	}
	return 0;
}
