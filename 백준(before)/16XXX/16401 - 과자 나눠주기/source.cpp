#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[1234567];

int binary(int s, int e){
	int mid = (s+e)/2;
	int cnt = 0;
	
	//printf("[%d]\n", mid);
	if(e<=s) return mid;
	
	for(int i=0; i<N; i++){
		cnt += (arr[i]/mid);
	}
	
	if(cnt < M) return binary(s,mid);
	else		return binary(mid+1,e);
}

int main(){
	cin >> M >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	cout << binary(1,1000000000)-1;
}
