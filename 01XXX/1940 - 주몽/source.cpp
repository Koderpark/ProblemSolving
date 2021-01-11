#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[23456] = {0};

int main(){
	int n,m;
	int s,e;
	int ans = 0;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	
	s = 0;
	e = n-1;
	
	sort(arr, arr+n);
	
	while(s<e){
		if(arr[s]+arr[e] == m){ ans++; e--; s++; }
		if(arr[s]+arr[e] >  m) e--;
		if(arr[s]+arr[e] <  m) s++;
	}
	printf("%d", ans);
	return 0;
}
