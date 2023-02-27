#include <bits/stdc++.h>
using namespace std;

int flag[1234567] = {0};
int arr[1234567] = {0};
int N;

int main(){
	cin >> N;
	for(int i=0; i<1234567; i++) cin >> arr[i];
	reverse(arr,arr+N);
	
	for(int i=1,j=0; i<N; i++){
		while(j>0 && arr[i] != arr[j]) j = fail[j-1];
		if(arr[i] == arr[j]) fail[i] = ++j;
	}
	
	for(int i=0; i<N; i++){
		cout << fail[i];
	}
	
	return 0;
}
