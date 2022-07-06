#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n;
int arr[123456] = {0};


int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	sort(arr, arr+n);
	
	int s = 0;
	int e = n-1;
	
	int minv = 2147483647;
	int mins;
	int mine;
	
	while(s<e){
		if(abs(arr[s]+arr[e]) < minv){
			minv = abs(arr[s]+arr[e]);
			mins = arr[s];
			mine = arr[e];
		}
		if(arr[e]+arr[s] < 0) s++;
		else e--;
	}
	printf("%d %d", mins, mine);
	return 0;
}
