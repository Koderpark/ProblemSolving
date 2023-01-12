#include <bits/stdc++.h>
using namespace std;

int arr[123456] = {0};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,K;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	cin >> K;
	sort(arr, arr+N);
	
	int ptr1 = 0;
	int ptr2 = N-1;
	
	int ans = 0;
	while(ptr1<ptr2){
		if(arr[ptr1] + arr[ptr2] == K){ ans++; }
		if(arr[ptr1] + arr[ptr2] > K) ptr2--;
		else ptr1++;
	}
	cout << ans << "\n";
	return 0;
}
