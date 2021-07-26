#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<int> v;
vector<int> in;

int main(){
	int n,k;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &k);
		in.push_back(k);
	}
	
	v.push_back(-INF);
	for(int i=0; i<n; i++){
		if(v[v.size()-1] < in[i]){ v.push_back(in[i]); }
		else{
			auto it = lower_bound(v.begin(), v.end(), in[i]);
			*it = in[i];
		}
	}
	
	printf("%d", n-v.size()+1);
	return 0;
}
