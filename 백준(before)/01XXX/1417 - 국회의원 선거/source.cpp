#include <bits/stdc++.h>
using namespace std;

int arr[56] = {0};

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	int maxv;
	int maxi;
	int ans = 0;
	
	while(1){
		maxv = 0;
		for(int i=0; i<N; i++){
			if(maxv <= arr[i]){
				maxv = arr[i];
				maxi = i;
			}
		}
		
		if(maxi == 0) break;
		else{
			arr[maxi]--;
			arr[0]++;
			ans++;
		}
	}
	
	cout << ans;
	return 0;
}
