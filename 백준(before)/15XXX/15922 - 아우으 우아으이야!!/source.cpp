#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<pair<int,int>> p;

int main(){
	int N,a,b;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a >> b;
		p.push_back({a,b});
	}
	
	int ans = 0;
	int s = p[0].x;
	int e = p[0].y;
	
	for(int i=1; i<N; i++){
		if(e >= p[i].x) e = max(p[i].y, e);
		else{
			ans += e-s;
			s = p[i].x;
			e = p[i].y;
		}
	}
	
	ans += e-s;
	cout << ans;
}
