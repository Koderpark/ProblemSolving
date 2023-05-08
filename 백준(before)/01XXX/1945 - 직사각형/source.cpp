#include <bits/stdc++.h>
using namespace std;

set<double, greater<double>> point;
map<double,int> add;
map<double,int> sub;

int main(){
	int N,a,b,c,d;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a >> b >> c >> d;
		point.insert((double)d/a);
		point.insert((double)b/c);
		add[(double)d/a]++;
		sub[(double)b/c]++;
	}
	
	int tmp = 0;
	int ans = -1;
	for(auto k : point){
		tmp += add[k];
		ans = max(ans, tmp);
		tmp -= sub[k];
	}
	cout << ans;
	return 0;
}
