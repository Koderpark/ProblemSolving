#include <bits/stdc++.h>
using namespace std;

pair<int,int> back[1234];
vector<int> lis;
int arr[1234] = {0};

vector<int> ans;

int main(){
	int n;
	lis.push_back(0);
	
	cin >> n;
	for(int i=0; i<n; i++) cin >> arr[i];
	
	for(int i=0; i<n; i++){
		if(lis.back() < arr[i]){
			lis.push_back(arr[i]);
			back[i] = {arr[i], lis.size()-1};
		}
		else{
			int idx = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
			lis[idx] = arr[i];
			back[i] = {arr[i], idx};
		}
	}
	
	int cnt = lis.size()-1;
	for(int i=n-1; i>=0; i--){
		if(back[i].second == cnt){
			cnt--;
			ans.push_back(back[i].first);
		}
	}
	cout << lis.size()-1 << "\n";
	for(auto it=ans.rbegin(); it!=ans.rend(); it++) cout << *it << " ";
	return 0;
}
