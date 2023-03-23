#include <bits/stdc++.h>
using namespace std;

int arr[23] = {0};
unordered_map<int,bool> um;

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<1<<N; i++){
		int tmp = i;
		int sum = 0;
		for(int j=0; tmp; j++,tmp/=2){
			if(tmp%2){
				sum+=arr[j];
			}
		}
		um[sum] = true;
	}
	
	for(int i=1; i<=20000000; i++){
		if(!um[i]){
			cout << i;
			return 0;
		}
	}
	return 0;
}
