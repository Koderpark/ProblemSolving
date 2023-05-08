#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
int arrs[1234] = {0};
int arre[1234] = {0};

int main(){
	int n,l,h;
	int maxh = -1;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &l, &h);
		arr[l] = h;
	}
	
	int maxv = -1;
	for(int i=0; i<=1000; i++){
		maxv = max(maxv, arr[i]);
		arrs[i] = maxv;
	}
	
	maxv = -1;
	for(int i=1000; i>=0; i--){
		maxv = max(maxv, arr[i]);
		arre[i] = maxv;
	}
	
	
	int ansv = 0;
	for(int i=0; i<=1000; i++) ansv += min(arrs[i], arre[i]);
	printf("%d", ansv);
	return 0;
}
