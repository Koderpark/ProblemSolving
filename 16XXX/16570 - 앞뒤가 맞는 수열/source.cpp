#include <bits/stdc++.h>
using namespace std;

int fail[1234567] = {0};
int arr[1234567] = {0};
int N;

int main(){
	cin >> N;
	for(int i=0; i<N; i++) cin >> arr[i];
	reverse(arr,arr+N);
	
	for(int i=1,j=0; i<N; i++){
		while(j>0 && arr[i] != arr[j]) j = fail[j-1];
		if(arr[i] == arr[j]) fail[i] = ++j;
	}
	
	int maxv = 0;
	int maxc = 0;
	
	for(int i=0; i<N; i++){
		maxv = max(maxv, fail[i]);
	}
	
	for(int i=0; i<N; i++){
		if(fail[i] == maxv) maxc++;
	}
	
	if(maxv == 0){
		cout << -1;
		return 0;
	}
	cout << maxv << " " << maxc;
	return 0;
}
