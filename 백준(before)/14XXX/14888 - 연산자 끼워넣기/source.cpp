#include <bits/stdc++.h>
using namespace std;

int n;
int maxv = -1000000000;
int minv =  1000000000;

int arr[123] = {0};
int opr[12] = {0};

int f(int sum, int idx){
	if(idx==n){
		maxv = max(maxv, sum);
		minv = min(minv, sum);
		return 0;
	}
	
	if(opr[0]){ opr[0]--; f(sum+arr[idx], idx+1); opr[0]++; }
	if(opr[1]){ opr[1]--; f(sum-arr[idx], idx+1); opr[1]++; }
	if(opr[2]){ opr[2]--; f(sum*arr[idx], idx+1); opr[2]++; }
	if(opr[3]){ opr[3]--; f(sum/arr[idx], idx+1); opr[3]++; }
	return 0;
}

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	for(int i=0; i<4; i++) scanf("%d", &opr[i]);
	f(arr[0],1);
	
	printf("%d\n%d", maxv, minv);
	return 0;
}
