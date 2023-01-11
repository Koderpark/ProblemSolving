#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
int prefix[1234] = {0};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	
	for(int i=0; i<n; i++){
		if(i) prefix[i] = prefix[i-1] + arr[i];
		else prefix[i] = arr[i];
	}
	
	if(prefix[0] != 1){ cout << 1; return 0; }
	
	for(int i=1; i<n; i++){
		if(prefix[i-1]+1 < arr[i]){
			cout << prefix[i-1]+1;
			return 0;
		}
	}
	cout << prefix[n-1]+1;
	return 0;
}

//앞의 k개를 더해서 prefix[k] 선언.
//prefix[k]+1 < arr[k+1] 인 경우 prefix[k]+1은 만들어낼수 없는 숫자가 됨 ㅁㄴㅇㄹ
//만일 모든 가정이 충족된다?
//prefix[last_k]+1 
