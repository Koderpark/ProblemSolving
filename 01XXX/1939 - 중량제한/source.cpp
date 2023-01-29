#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int parent[12345] = {0};
vector<pair<int,pair<int,int>>> v;

int find(int k){
	if(parent[k] == k) return k;
	return parent[k] = find(parent[k]);
}

void joint(int a, int b){
	a = find(a);
	b = find(b);
	parent[a] = b;
	return;
}

int main(){
	for(int i=0; i<12345; i++) parent[i] = i;
	
	int N,M;
	int A,B;
	cin >> N >> M;
	for(int i=0; i<M; i++){
		int a,b,c;
		cin >> a >> b >> c;
		v.push_back({-c,{a,b}});
	}
	cin >> A >> B;
	
	sort(v.begin(), v.end());
	
	int ptr = 0;
	while(true){
		joint(v[ptr].y.x, v[ptr].y.y);
		if(find(A) == find(B)) break;
		ptr++;
	}
	
	cout << -v[ptr].x;
	return 0;
}
