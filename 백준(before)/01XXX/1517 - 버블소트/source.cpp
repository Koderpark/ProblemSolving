#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int N;
int arr[567890] = {0};
int tmparr[567890] = {0};
ll ans = 0;

void merge(int s, int e){
	int mid = (s+e)/2;
	int ptr1 = s;
	int ptr2 = mid+1;
	int tmp = s;
	
	while(ptr1 <= mid && ptr2 <= e){
		if(arr[ptr1] <= arr[ptr2]) tmparr[tmp++] = arr[ptr1++];
		else{
			ans += (ll)(mid - ptr1 + 1);
			tmparr[tmp++] = arr[ptr2++];
		}
	}
	
	while(ptr1 <= mid) tmparr[tmp++] = arr[ptr1++];
	while(ptr2 <= e)   tmparr[tmp++] = arr[ptr2++];
	
	for(int i=s; i<=e; i++) arr[i] = tmparr[i];
	return;
}

void mergeSort(int s, int e){
	if(s<e){
		int mid = (s+e)/2;
		mergeSort(s,mid);
		mergeSort(mid+1,e);
		
		merge(s,e);
	}
	return;
}

int main(){
	cin >> N;
	for(int i=1; i<=N; i++) cin >> arr[i];
	mergeSort(1,N);
	
	//for(int i=1; i<=N; i++) cout << arr[i] << " ";
	//cout << endl;
	cout << ans;
	return 0;
}
