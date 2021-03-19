#include <bits/stdc++.h>
using namespace std;

stack<pair<int,int>> s;
int arr[567890] = {0};
int ans[567890] = {0};


int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	
	for(int i=n; i>=1; i--){
		while(!s.empty() && s.top().first < arr[i]){
			auto tmp = s.top();
			s.pop();
			ans[tmp.second] = i;
		}
		s.push({arr[i], i});
	}
	
	for(int i=1; i<=n; i++){
		printf("%d ", ans[i]);
	}
	return 0;
}
