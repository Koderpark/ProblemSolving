#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<int> v;
vector<pair<int,int>> input;

int main(){
	v.push_back(-INF);
	
	int n,a,b;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		input.push_back({a,b});
	}
	
	sort(input.begin(), input.end());
	
	for(int i=0; i<n; i++){
		if(v[v.size()-1] < input[i].second){ v.push_back(input[i].second); }
		else{
			auto it = lower_bound(v.begin(), v.end(), input[i].second);
			*it = input[i].second;
		}
	}
	
	printf("%d", n-v.size()+1);
	return 0;
}
