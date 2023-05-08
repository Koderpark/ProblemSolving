#include <bits/stdc++.h>
using namespace std;

float arr[10000001] = {0};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cout.precision(3);
	cout << fixed;
	
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+N);
	for(int i=0; i<7; i++){
		cout << arr[i] << "\n";
	}
	return 0;
}
