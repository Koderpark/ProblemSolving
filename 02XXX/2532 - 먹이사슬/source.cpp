#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<int> v;
vector<pair<int,int>> in;

bool cmp(pair<int,int> A, pair<int,int> B){
	return make_pair(A.first, -A.second) < make_pair(B.first, -B.second);
}
/*
int lower_bound_f(int s, int e, pair<int,int> val){
	int mid = (s+e)/2;
	if(s >= e) return s;
	
	auto A = v[mid];
	auto B = val;
	
	if      (A.first <  B.first && A.second >  B.second){ s = mid+1; }
	else if (A.first <= B.first && A.second >  B.second){ s = mid+1; }
	else if (A.first <  B.first && A.second >= B.second){ s = mid+1; }
	else                                                { e = mid; }
	
	return lower_bound_f(s, e, val);
}
*/
int main(){
	int n,a,b,c;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d %d", &a, &b, &c);
		in.push_back({b,c});
	}
	sort(in.begin(), in.end(), cmp);
	in.erase(unique(in.begin(), in.end()), in.end());
	
	for(int i=0; i<in.size(); i++){
		int s=0;
		int e=v.size();
		int mid;
		
		//printf("(%d %d)\n",s, e);
		
		//auto it = lower_bound(v.begin(), v.end(), in[i].second);
		
		while(s<e){
			mid = (s+e)/2;
			if(v[mid] < in[i].second) e = mid;
			else s = mid+1;
		}
		
		if(s == v.size()) { v.push_back(in[i].second); }
		else              { v[s] = in[i].second; }
	}
	
	printf("%d", v.size());
	return 0;
}
