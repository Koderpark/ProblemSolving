#include <stdio.h>
#include <algorithm>
#include <vector>
#define MID ((s+e)/2)
using namespace std;


int seg[456789] = {0}; // 구간에서의 켜진 스위치의 수. 
int lazy[456789] = {0};

void propagate(int node, int s, int e){
	if(!(lazy[node]%2)) return;
	if(s!=e){
		lazy[node*2]     += lazy[node];
		lazy[node*2 + 1] += lazy[node];
	}
	seg[node] = (e-s+1) - seg[node];
	lazy[node] = 0;
}

void update(int L, int R, int node, int s, int e){
	propagate(node, s, e);
	if(R<s || e<L) return;
	if(L<=s && e<=R){
		if(s!=e){ lazy[node*2]++; lazy[node*2+1]++; }
		seg[node] = (e-s+1)-seg[node];
		return;
	}

	update(L,R,node*2,   s,     MID);
	update(L,R,node*2+1, MID+1, e);
	seg[node] = seg[node*2] + seg[node*2+1];
}

int query(int L, int R, int node, int s, int e){
	propagate(node, s, e);
	if(R<s || e<L) return 0;
	if(L<=s && e<=R) return seg[node];
	
	int val = 0;
	val += query(L,R,node*2,  s,     MID);
	val += query(L,R,node*2+1,MID+1, e);
	return val;
}

int main(){
	int n,m;
	int a,b,c;
	scanf("%d %d", &n, &m);
	while(m--){
		scanf("%d %d %d", &a, &b, &c);
		if(a==0) update(b,c,1,1,n);
		if(a==1) printf("%d\n", query(b,c,1,1,n));
	}
	return 0;
}
