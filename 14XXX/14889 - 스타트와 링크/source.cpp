#include <stdio.h>

#define INF 999;

int arr[123][123];

int min(int a, int b){ return a>b?b:a; }
int abs(int k){ return k>0?k:-k; }
int main(){
	int n;
	int ans = INF;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) scanf("%d", &arr[i][j]);
	}
	
	for(int x1=1; x1<=n; x1++) for(int y1=x1+1; y1<=n; y1++){
		for(int x2=1; x2<=n; x2++) for(int y2=x2+1; y2<=n; y2++){
			if((x1==x2 && y1==y2) || (x1==y1 && x2==y2) || (x1==y2 && y1==x2)) continue;
			ans = min(ans, abs((arr[x1][y1]+arr[y1][x1])-(arr[x2][y2]+arr[y2][x2])));
		}
	}
	
	printf("%d", ans);
	
	return 0;
}
