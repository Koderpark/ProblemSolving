#include <bits/stdc++.h>
using namespace std;

map<int,int> m;

int arr[567890] = {0};
int tmp[567890] = {0};

long long int ans = 0;

void merge(int s, int mid, int e){
	int ptr = s;
	int s1  = s;
	int s2  = mid+1;
	
	while(s1<=mid && s2<=e){
		if(arr[s1] <= arr[s2]) tmp[ptr++] = arr[s1++];
		else                 { tmp[ptr++] = arr[s2++]; ans += (mid-s1+1); }
	}
	if(s1<=mid) for(int i=s1; i<=mid; i++) tmp[ptr++] = arr[i];
	else        for(int i=s2; i<=e;   i++) tmp[ptr++] = arr[i];
	
	for(int i=s; i<=e; i++) arr[i] = tmp[i];
	return;
}

void mergesort(int s, int e){
	if(s<e){
		int mid = (s+e)/2;
		mergesort(s,mid);
		mergesort(mid+1,e);
		merge(s,mid,e);
	}
	return;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,tmp;
	cin >> n;
	for(int i=1; i<=n; i++)  cin >> arr[i];
	for(int i=1; i<=n; i++){ cin >> tmp; m[tmp] = i; }
	for(int i=1; i<=n; i++)  arr[i] = m[arr[i]];
	
	mergesort(1,n);
	
	//for(int i=1; i<=n; i++) printf("%d ", arr[i]);
	
	cout << ans;
	return 0;
}
