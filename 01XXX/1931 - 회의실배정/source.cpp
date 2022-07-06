#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

vector<pair<int,int>> v;

int main(){
	int n,a,b,time=0,cnt=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		v.push_back({b,a});
	}
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<n; i++){
		if( v[i].second >= time ){
			time = v[i].first;
			cnt++;
		}
	}
	printf("%d", cnt);
}
