#include <stdio.h>
#include <algorithm>

using namespace std;
int arr[1000010] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	
	sort(arr, arr+n);
	
	for(int i=n-1; i>=0; i--) printf("%d\n", arr[i]);
	return 0;
}
