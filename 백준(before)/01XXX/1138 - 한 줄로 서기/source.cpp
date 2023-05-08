#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int arr[10] = {0};

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> arr[i];
	
	for(int i=n-1; i>=0; i--){
		v.insert(v.begin()+arr[i], i+1);
	}
	
	for(auto k : v){
		cout << k << " ";
	}
	return 0;
}
