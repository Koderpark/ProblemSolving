#include <bits/stdc++.h>
#define INF 998244353
using namespace std;

int arr[2345] = {0};
vector<int> lis;


int main(){
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++){
		cin >> arr[i];
		arr[i] *= -1;
	}
	
	lis.push_back(-INF);
	
	for(int i=1; i<=N; i++){
		if(lis.back() < arr[i]){
			lis.push_back(arr[i]);
		}
		else{
			auto it = lower_bound(lis.begin(), lis.end(), arr[i]);
			*it = arr[i];
		}
	}
	
	cout << N - lis.size() + 1;
}
