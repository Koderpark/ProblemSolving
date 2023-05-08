#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;

vector<int> lis;
vector<int> v;
pair<int,int> back[1234567];
int ans[1234567] = {0};

int main(){
	for(int i=0; i<1234567; i++) ans[i] = INF;
	lis.push_back(-INF);
	
	int n,k;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &k);
		v.push_back(k);
	}
	
	for(int i=0; i<n; i++){
		if(lis.back() < v[i]){
			lis.push_back(v[i]);
			back[i] = {v[i], lis.size()-1};
		}
		else{
			auto it = lower_bound(lis.begin(), lis.end(), v[i]);
			*it = v[i];
			int tmp = distance(lis.begin(), it);
			back[i] = {v[i], tmp};
		}
	}
	
	printf("%d\n", lis.size()-1);
	
	int ptr = lis.size()-1;
	for(int i=n-1; i>=0; i--){
		if(back[i].second == ptr){
			ans[ptr] = back[i].first;
			ptr--;
		}
	}
	for(int i=1; i<=lis.size()-1; i++){ printf("%d ", ans[i]); }
	return 0;
}
