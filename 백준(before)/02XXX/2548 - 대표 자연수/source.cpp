#include<bits/stdc++.h>
using namespace std;

int N;
int arr[23456];

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+N);
	
	int idx;
	if(N%2) idx = N/2;
	else idx = N/2-1;
	
	cout << arr[idx];
	return 0;
}
