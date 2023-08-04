#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

struct pos{
	int x1;
	int x2;
	int idx;
};

bool cmp(pos &a, pos &b){
	if(a.x1 == b.x1) return a.x2 < b.x2;
	return a.x1 < b.x1;
}

int parent[123456] = {0};

vector<pos> v;

int find(int k){
	if(parent[k] == k) return k;
	else return parent[k] = find(parent[k]);
}

void joint(int a, int b){
	a = find(a);
	b = find(b);
	if(a != b){
		parent[a] = b;
	}
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for(int i=0; i<123456; i++) parent[i] = i;
	
	int N,Q;
	int a,b,c;
	cin >> N >> Q;
	for(int i=1; i<=N; i++){
		cin >> a >> b >> c;
		v.push_back({a,b,i});
	}
	
	sort(v.begin(),v.end(),cmp);
	
	int s = v[0].x1;
	int e = v[0].x2;
	
	for(int i=1; i<N; i++){
		if(v[i].x1 <= e){
			joint(v[i].idx,v[i-1].idx);
			e = max(e, v[i].x2);
		}
		else{
			s = v[i].x1;
			e = v[i].x2;
		}
	}
	
	while(Q--){
		cin >> a >> b;
		if(find(a) == find(b)) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
