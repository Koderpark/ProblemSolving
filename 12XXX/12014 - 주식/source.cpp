#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<int> lis;
vector<int> v;

int main(){
	int t;
	scanf("%d", &t);
	int k = t;
	while(k--){
		v.clear();
		lis.clear();
		
		int a,b,c;
		scanf("%d %d", &a, &b);
		for(int i=0; i<a; i++){
			scanf("%d", &c);
			v.push_back(c);
		}
		
		lis.push_back(-INF);
		for(int i=0; i<a; i++){
			if(lis.back() < v[i]){ lis.push_back(v[i]); }
			else{
				auto it = lower_bound(lis.begin(), lis.end(), v[i]);
				*it = v[i];
			}
		}
		
		printf("Case #%d\n", t-k);
		printf("%d\n", lis.size()-1 >= b);
	}
	return 0;
}
