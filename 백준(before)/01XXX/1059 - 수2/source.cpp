#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int arr[100] = {0};

int main(){
	int n,k;
	int l=0,r=1001;
	int sum=0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++)scanf("%d", &arr[i]);
	arr[n]   = 0;
	arr[n+1] = 1001;
	scanf("%d", &k);
	sort(arr, arr+n+2);
	
	for(int i=0; i<=n+1; i++) if(arr[i]==k){ printf("0"); return 0; }
	for(int i=0; i<=n; i++){
		if(arr[i]<k&&k<arr[i+1]){
			l = arr[i];
			r = arr[i+1];
		}
	}
	
	printf("%d", (k-l)*(r-k)-1);
	return 0;
}
