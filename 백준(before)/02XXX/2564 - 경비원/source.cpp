#include <bits/stdc++.h>
using namespace std;

int dis[123] = {0};
int pdis = 0;

int main(){
	int R,C,N;
	int a,b;
	
	cin >> R >> C;
	cin >> N;
	
	for(int i=0; i<=N; i++){
		cin >> a >> b;
		if(a == 1) dis[i] = b;
		if(a == 2) dis[i] = 2*R+C-b;
		if(a == 3) dis[i] = 2*(R+C)-b;
		if(a == 4) dis[i] = R+b;
	}
	
	int ans = 0;
	int tmp = 0;
	
	for(int i=0; i<N; i++){
		tmp = abs(dis[i] - dis[N]);
		ans += min(2*(R+C) - tmp, tmp);
	}
	cout << ans;
	return 0;
}
