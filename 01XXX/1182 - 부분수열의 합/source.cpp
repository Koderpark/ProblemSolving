#include <bits/stdc++.h>
using namespace std;

int arr[25] = {0};
int ans = 0;
int n,s;

void func(int idx, int val){
	if(idx == n){
		if(val == s) ans++;
		return;
	}
	
	func(idx+1, val+arr[idx]);
	func(idx+1, val);
	return;
}

int main(){
	scanf("%d %d", &n, &s);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	
	func(0, 0);
	printf("%d", s==0?ans-1:ans);
	return 0;
}
