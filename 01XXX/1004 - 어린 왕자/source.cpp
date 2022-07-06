#include <stdio.h>

long long int mul(long long int k){ return k*k; }

int main(){
	int t;
	int x1,y1;
	int x2,y2;
	int n;
	
	scanf("%d", &t);
	while(t--){
		int ans = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			int cx,cy,r;
			scanf("%d %d %d", &cx, &cy, &r);
			int d1 = mul(cx-x1) + mul(cy-y1);
			int d2 = mul(cx-x2) + mul(cy-y2);
			if(d1 < mul(r)) ans++;
			if(d2 < mul(r)) ans++;
			if(d1 < mul(r) && d2 < mul(r)) ans-=2;
		}
		printf("%d\n", ans);
	}
	return 0;
}
