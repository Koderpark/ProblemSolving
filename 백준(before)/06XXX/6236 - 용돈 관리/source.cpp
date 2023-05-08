#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[123456] = {0};

int search(int s,int e){
	int mid = (s+e)/2;
	if(s>e) return s;
	
	int cnt = 0;
	int tmp = 0;
	for(int i=0; i<n; i++){
		tmp += arr[i];
		if(tmp > mid){
			tmp = 0;
			i--;
			cnt++;
		}
	} 
	
	if(cnt < m) return search(s,mid-1);
	else        return search(mid+1,e);
}

int main(){
	cin >> n >> m;
	
	int maxv = -1;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		maxv = max(maxv, arr[i]);
	}
	cout << search(maxv, 1e9);
	return 0;
}

//¾Æ±î²¨¶û ¿ÏÀüÈ÷ ¶È°°³×¿ä ³¯¸Ô ²¨¾î ¾ï 
