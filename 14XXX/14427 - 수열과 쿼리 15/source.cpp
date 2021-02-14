#include <bits/stdc++.h>
#define INF 1234567890

using namespace std;

int seg[456789] = {0};
int input[123456] = {0};

int minF(int a, int b){
	if(input[a] == input[b]) return min(a,b);
	return input[a]<input[b] ? a:b;
}

int init(int node, int s, int e){
	if(s==e) return seg[node] = s;
	int m = (s+e)/2;
	return seg[node] = minF(init(2*node,s,m), init(2*node+1,m+1,e)); 
}

int update(int node, int s, int e, int idx){
	if(s==e || idx<s || e<idx) return seg[node]; 
	int m = (s+e)/2;
	return seg[node] = minF(update(2*node,s,m,idx), update(2*node+1,m+1,e,idx));
}


int main(){
	int n,m,q,a,b;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &input[i]);
	init(1,1,n);
	
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d", &q);
		if(q==1){
			scanf("%d %d", &a, &b);
			input[a] = b;
			update(1,1,n,a);
		}
		if(q==2){
			printf("%d\n", seg[1]);
		}
	}
	return 0;
}
