#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int N;
int arr[1234567] = {0};
int tmp[1234567] = {0};
ll ans = 0;

void merge(int s, int e){
	int mid = (s+e)/2;
	int ptr1 = s;
	int ptr2 = mid+1;
	int p = s;
	
	while(ptr1 <= mid && ptr2 <= e){
		if(arr[ptr1] <= arr[ptr2]) tmp[p++] = arr[ptr1++];
		else{
			ans += (ll)(mid-ptr1+1);
			tmp[p++] = arr[ptr2++];
		}
	}
	
	while(ptr1 <= mid) tmp[p++] = arr[ptr1++];
	while(ptr2 <= e)   tmp[p++] = arr[ptr2++];
	
	for(int i=s; i<=e; i++) arr[i] = tmp[i];
	return;
}

void mSort(int s, int e){
	int mid = (s+e)/2;
	if(s<e){
		mSort(s,mid);
		mSort(mid+1,e);
		
		merge(s,e);
	}
}

int main(){
	cin >> N;
	for(int i=1; i<=N; i++){ cin >> arr[i]; }
	mSort(1,N);
	cout << ans;
	return 0;
}

