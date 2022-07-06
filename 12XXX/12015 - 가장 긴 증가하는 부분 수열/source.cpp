#include <bits/stdc++.h>
using namespace std;

int arr[1234567] = {0};

vector<int> ans;

int main(){
	int n;
	scanf("%d" ,&n);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	ans.push_back(-1);
	
	for(int i=1; i<=n; i++){
		if(ans.back() < arr[i]){
			ans.push_back(arr[i]);
		}
		else{
			auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
			*it = arr[i];
		}
	}
	printf("%d", ans.size()-1);
}
