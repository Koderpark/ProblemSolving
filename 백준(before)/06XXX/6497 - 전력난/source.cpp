#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long ll;

int M,N;
int parent[234567] = {0};

vector<pair<int,pair<int,int>>> v;

int find(int k){
	if(parent[k] == k) return k;
	return parent[k] = find(parent[k]);
}

void joint(int a, int b){
	a = find(a);
	b = find(b);
	
	if(a!=b) parent[a] = b;
	return;
}

int main(){
	int x,y,z;
	
	while(1){
		ll sum1 = 0;
		ll sum2 = 0;
		int cnt = 0;
		cin >> M >> N;
		
		if(!M && !N) break;
		
		for(int i=0; i<234567; i++) parent[i] = i;
		v.clear();
		
		for(int i=0; i<N; i++){
			cin >> x >> y >> z;
			v.push_back({z,{x,y}});
			sum1 += z;
		}
		
		sort(v.begin(), v.end());
		
		for(auto it : v){
			if(cnt == M-1) break;
			if(find(it.y.x) == find(it.y.y)) continue;
		
			joint(it.y.x, it.y.y);
			cnt++;
			sum2 += it.x;
		}
		cout << sum1 - sum2 << "\n";
	}
	return 0;
}
