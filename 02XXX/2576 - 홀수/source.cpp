#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[10] = {0};
	int cnt = 0;
	int sum = 0;
	int min = 12345;
	
	for(int i=0; i<7; i++){
		cin >> arr[i];
		if(arr[i]%2 == 1){
			cnt++;
			sum += arr[i];
			if(min > arr[i]) min = arr[i];
		}
	}
	
	if(cnt == 0) cout << -1;
	else{
		cout << sum << "\n" << min;
	}
	return 0;
}
