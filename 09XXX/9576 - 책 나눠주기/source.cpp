#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool chk[1010] = {0};
int n,m,a,b,cnt,t;
vector<pair<int,int>> v;

bool compare(pair<int,int> a, pair<int,int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	scanf("%d", &t);
	while(t--){
		cnt = 0;
		v.clear();
		for(int i=0; i<1010; i++) chk[i] = false;
		
		scanf("%d %d", &n, &m);
		for(int i=0; i<m; i++){ scanf("%d %d", &a, &b); v.push_back({a,b}); }	
		
		sort(v.begin(), v.end(), compare);
		for(int i=0; i<m; i++){
			for(int j=v[i].first; j<=v[i].second; j++) if(chk[j] == false){ chk[j] = true; cnt++; break; }
		}
		printf("%d\n", cnt);
	}
	return 0;
}
