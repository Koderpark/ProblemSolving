#include <bits/stdc++.h>
using namespace std;

string arr[12];

int main(){
	int N,M;
	cin >> N >> M;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<N; i++){
		reverse(arr[i].begin(), arr[i].end());
		cout << arr[i]<< "\n";
	}
	return 0;
}
