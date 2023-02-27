#include <bits/stdc++.h>
using namespace std;

int arr[234] = {0};
vector<int> v;

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		if(!i) v.push_back(arr[i]);
		else{
			if(v.back() < arr[i]){
				v.push_back(arr[i]);
			}
			else{
				auto it = lower_bound(v.begin(), v.end(), arr[i]);
				*it = arr[i];
			}
		}
	}
	
	cout << N-v.size();
	
	return 0;
}
