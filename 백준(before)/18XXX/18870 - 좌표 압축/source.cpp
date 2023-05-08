#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<int> idx;

int main(){
	int n,a;
	int ans;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		arr.push_back(a);
		idx.push_back(a);
	}
	sort(idx.begin(), idx.end());
	idx.erase(unique(idx.begin(), idx.end()), idx.end());
	
	for(int i=0; i<n; i++){
		ans = lower_bound(idx.begin(), idx.end(), arr[i]) - idx.begin();
		printf("%d ", ans);
	}
	return 0;
}
