#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<pair<int,pair<int,int>>> v;
vector<pair<int,int>> ans;

int main(){
	int N;
	int a,b,c;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a >> b >> c;
		v.push_back({c,{a,b}});
	}
	
	sort(v.begin(), v.end(), greater<pair<int,pair<int,int>>>());
	
	for(int i=0; i<N; i++){
		if(ans.size() == 3) break;
		
		if(ans.size() == 2 && ans[0].x == ans[1].x && v[i].y.x == ans[0].x){
			continue;
		}
		
		ans.push_back(v[i].y);
	}
	
	for(int i=0; i<3; i++){
		cout << ans[i].x << " " << ans[i].y << "\n";
	}
	return 0;
}
