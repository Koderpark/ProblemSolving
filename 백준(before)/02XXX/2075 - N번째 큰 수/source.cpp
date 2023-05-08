#include <stdio.h>
#include <algorithm>

using namespace std;
int arr[2250010] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n*n; i++) scanf("%d", &arr[i]);
	
	sort(arr, arr+n*n, greater<int>());
	
	printf("%d", arr[n-1]);
	return 0;
}
