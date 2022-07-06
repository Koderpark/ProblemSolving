#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<int> lis;
vector<pair<int,int>> v;
vector<pair<int,int>> back;
int chk[567890] = {0};
int conv[567890] = {0};
int chk2[567890] = {0};
vector<int> ans;

int main(){
	int n,a,b;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		v.push_back({a,b});
		conv[b] = a;
	}
	
	sort(v.begin(), v.end());
	lis.push_back(-INF);
	for(int i=0; i<n; i++){
		if(lis.back() < v[i].second){
			lis.push_back(v[i].second);
			back.push_back({lis.size()-1, v[i].second});
		}
		else{
			auto it = lower_bound(lis.begin(), lis.end(), v[i].second);
			*it = v[i].second;
			back.push_back({it - lis.begin(), v[i].second});
		}
	}
	
	printf("%d\n", n-lis.size()+1);
	int ptr = lis.size()-1;
	for(int i=n-1; i>=0; i--){
		if(back[i].first == ptr){
			chk[conv[back[i].second]]= 1;
			ptr--;
		}
	}
	
	vector<int> tmp;
	for(int i=0; i<n; i++){ if(chk[v[i].first]) tmp.push_back(v[i].first); }
	sort(tmp.begin(), tmp.end());
	
	int ptr2 = 0;
	for(int i=0; i<n; i++){
		if(v[i].first == tmp[ptr2]){
			ptr2++;
		}else{
			ans.push_back(v[i].first);
		}
	}
	
	for(int i=0; i<ans.size(); i++) printf("%d\n", ans[i]);
	return 0;
}
