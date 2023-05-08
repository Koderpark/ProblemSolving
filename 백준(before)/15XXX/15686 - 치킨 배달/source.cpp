#include <bits/stdc++.h>
using namespace std;

struct pos{ int x; int y; };

int n,m;
int tmp;
int ans = 1000000000;

vector<pos> house, store;
vector<int> v;

void f(int idx, int k){
	if(idx>store.size()) return;
	if(k==m){
		int sum = 0;
		for(int i=0; i<house.size(); i++){
			int dis = 1000000000;
			for(int j=0; j<v.size(); j++){
				dis = min(dis, abs(house[i].x - store[v[j]].x)+abs(house[i].y - store[v[j]].y));
			}
			sum+=dis;
		}
		ans = min(ans, sum);
		return;
	}
	v.push_back(idx); f(idx+1,k+1);
	v.pop_back();     f(idx+1,k);
	return;
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &tmp);
			if(tmp==1) house.push_back({i,j});
			if(tmp==2) store.push_back({i,j});
		}
	}
	f(0,0);
	printf("%d", ans);
	return 0;
}
