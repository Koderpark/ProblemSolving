#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<int> arr;

int main(){
	int N,k;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		arr.push_back(k);
	}
	
	sort(arr.begin(), arr.end());
	
	while(ans.size() <= N){
		if(ans.empty()){
			ans.push_back(arr[0]);
			arr.erase(arr.begin());
		}
		else{
			int ptr = 0;
			while(arr[ptr]-ans.back() == 1){
				ptr++;
			}
			ans.push_back(arr[ptr]);
			arr.erase(arr.begin()+ptr);
		}
	}
	
	for(auto it : ans) cout << it << " ";
	return 0;
}
