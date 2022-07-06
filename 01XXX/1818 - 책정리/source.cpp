#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<int> lis;
vector<int> v;

int main(){
	int n,a;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		v.push_back(a);
	}
	
	lis.push_back(-INF);
	for(int i=0; i<n; i++){
		if(lis.back() < v[i]){ lis.push_back(v[i]); }
		else{
			auto it = lower_bound(lis.begin(), lis.end(), v[i]);
			*it = v[i];
		}
	}
	
	printf("%d", n-lis.size()+1);
	return 0;
}
