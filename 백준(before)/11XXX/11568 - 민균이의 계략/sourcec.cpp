#include <bits/stdc++.h>
using namespace std;

vector<int> lis;
int arr[1234] = {0};

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++) cin >> arr[i];
	
	lis.push_back(0);
	
	for(int i=0; i<N; i++){
		if(lis.back() < arr[i]){
			lis.push_back(arr[i]);
		}
		else{
			auto it = lower_bound(lis.begin(), lis.end(), arr[i]);
			*it = arr[i];
		}
	}
	
	cout << lis.size()-1;
	return 0;
}
