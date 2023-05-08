#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<int> v;

vector<int> va;
int vb[123456] = {0};
int vc[123456] = {0};

int main(){
	v.push_back(-INF);
	
	int n,a,b;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		va.push_back(a);
	}
	for(int i=0; i<n; i++){
		scanf("%d", &b);
		vb[b] = i;
	}
	for(int i=0; i<n; i++){ vc[i] = vb[va[i]]; }
	
	for(int i=0; i<n; i++){
		if(v[v.size()-1] < vc[i]){
			v.push_back(vc[i]);
		}else{
			auto it = lower_bound(v.begin(), v.end(), vc[i]);
			*it = vc[i];
		}
	}
	
	printf("%d", v.size()-1);
	return 0;
}

