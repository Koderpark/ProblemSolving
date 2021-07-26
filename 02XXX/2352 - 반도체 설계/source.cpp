#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<int> v;
vector<int> in;

int main(){
	int n,tmp;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		in.push_back(tmp);
	}
	
	v.push_back(-INF);
	for(int i=0; i<n; i++){
		if(v[v.size()-1] < in[i]){ v.push_back(in[i]); }
		else {
			auto it = lower_bound(v.begin(), v.end(), in[i]);
			*it = in[i];
		}
	}
	
	printf("%d", v.size()-1);
	return 0;
}
