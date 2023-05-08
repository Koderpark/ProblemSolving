#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.x == b.x) return a.y > b.y;
	return a.x < b.x;
}

vector<pair<int,int>> v;

int main(){
	int N,a,b;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> a >> b;
		v.push_back({a-b,a+b});
	}
	
	sort(v.begin(), v.end(), cmp);
	
	int ans = 0;
	int maxv = -(1e9+7)*2;
	for(int i=0; i<N; i++){
		if(v[i].y > maxv){
			maxv = v[i].y;
			ans++;
		}
	}
	cout << ans;
	return 0;
}
