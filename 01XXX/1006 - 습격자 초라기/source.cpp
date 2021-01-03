#include <stdio.h>
#include <algorithm>
#include <utility>
#include <string.h>

#define INF 9999999

using namespace std;

int n,w;
int inner[12345];
int outer[12345];
int both[12345];

int inarr[12345];
int outarr[12345];

int tmpin;
int tmpout;

void clear(){
	memset(inner, 0, sizeof(inner));
	memset(outer, 0, sizeof(outer));
	memset(both,  0, sizeof(both));
}

void fill(){
	for(int i=2; i<=n; i++){
		int in2 =  (inarr[i-1]+inarr[i]<=w)  ? 1:2;
		int out2 = (outarr[i-1]+outarr[i]<=w)? 1:2;
		int inout2 = (inarr[i]+outarr[i]<=w) ? 1:2;
		
		inner[i] = min(both[i-1]+1, outer[i-1]+in2);
		outer[i] = min(both[i-1]+1, inner[i-1]+out2);
		both[i] = min({both[i-1]+inout2, both[i-2]+in2+out2, inner[i]+1, outer[i]+1});
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int ans = INF;
		scanf("%d %d", &n, &w);
		for(int i=1; i<=n; i++) scanf("%d", &inarr[i]);
		for(int i=1; i<=n; i++) scanf("%d", &outarr[i]);
		
		tmpin = inarr[1];
		tmpout = outarr[1];
		
		// 양쪽 모두 연결되지 않음 //
		inner[1] = outer[1] = 1;
		both[1] = (inarr[1]+outarr[1]<=w) ? 1:2;
		
		fill();
		ans = min(ans, both[n]);
		clear();
		
		// 안쪽 연결됨 //
		if(n!=1 && inarr[1]+inarr[n] <= w){
			inner[1] = outer[1] = 1; both[1] = 2;
			inarr[1] = INF;
			
			fill();
			ans = min(ans, outer[n]);
			
			inarr[1] = tmpin;
			clear();
		}
	
		// 바깥쪽 연결됨 //
		if(n!=1 && outarr[1]+outarr[n] <= w){
			inner[1] = outer[1] = 1; both[1] = 2;
			outarr[1] = INF;
			
			fill();
			ans = min(ans, inner[n]);
			
			outarr[1] = tmpout;
			clear();
		}
		
		// 양쪽 둘다 연결됨 //
		if(n!=1 && inarr[1]+inarr[n]<=w && outarr[1]+outarr[n]<=w){
			inner[1] = outer[1] = 1; both[1] = 2;
			inarr[1] = outarr[1] = INF;
			
			fill();
			ans = min(ans, both[n-1]);
			
			inarr[1] = tmpin;
			outarr[1] = tmpout;
			clear();
		}
		printf("%d\n", ans);
	}
	return 0;
}
