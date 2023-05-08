#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
vector<int> dot[123456];

int main(){
	int n;
	int pos, color;
	ll ans = 0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &pos, &color);
		dot[color].push_back(pos);
	}
	
	int size;
	for(int i=1; i<=n; i++){
		sort(dot[i].begin(), dot[i].end());
		size = dot[i].size();
		if(size == 0 || size == 1) continue;
		
		ans += (ll)dot[i][1]-dot[i][0];
		for(int j=1; j<size-1; j++){
			ans += min((ll)dot[i][j+1] - dot[i][j],
			           (ll)dot[i][j]   - dot[i][j-1]);
		}
		ans += (ll)dot[i][size-1]-dot[i][size-2];
	}
	
	printf("%lld", ans);
	return 0;
}
