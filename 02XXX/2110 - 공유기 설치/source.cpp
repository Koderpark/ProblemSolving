#include <bits/stdc++.h>
using namespace std;

int n,c;
int arr[234567] = {0};

int cnt(int k){
	int cnt = 0;
	int prev = 0;
	for(int i=1; i<n; i++){
		if(k <= arr[i]-arr[prev]){
			//printf("[%d] ", i);
			prev = i;
			cnt++;
		}
	}
	return cnt+1;
}

int search(int s, int e){
	int mid = (s+e)/2;
	if(s>e) return mid;
	
	if(cnt(mid) < c) return search(s,mid-1);
	else        return search(mid+1,e);
}

int main(){
	cin >> n >> c;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	//cout << cnt(1);
	cout << search(1,arr[n-1]);
	return 0;
}
