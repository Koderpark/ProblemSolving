#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};

int main(){
	int N,K;
	cin >> N >> K;
	
	if(N < K*(K+1)/2){
		cout << -1;
		return 0;
	}
	
	N -= K*(K+1)/2;
	
	for(int i=1; i<=K; i++){ arr[i] = i; }
	
	int ptr = K;
	while(N--){
		arr[ptr--]++;
		if(!ptr) ptr = K;
	}
	
	cout << arr[K]-arr[1];
	return 0;
}
