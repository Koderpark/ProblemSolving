#include <bits/stdc++.h>
using namespace std;

int num[123] = {0};
bool flag = 1;
long long int ans = 0;

int fill(int x, int y, int z){
	if(!(x&&y&&z)) return 0;
	
	for(int i=19; i>=0; i--){
		int k = 1<<i;
		if(num[i] && x>=k && y>=k && z>=k){
			num[i]--;
			ans++;
			fill(x-k,k,k);
			fill(k,y-k,k);
			fill(k,k,z-k);
			fill(x-k,y-k,k);
			fill(k,y-k,z-k);
			fill(x-k,k,z-k);
			fill(x-k,y-k,z-k);
			return 0;
		}
	}
	flag = false;
	return 0;
}

int main(){
	int x,y,z,n,a,b;
	cin >> x >> y >> z;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a >> b;
		num[a] = b;
	}
	
	fill(x,y,z);
	
	if(!flag) cout << -1;
	else      cout << ans;
	
	return 0;
}
