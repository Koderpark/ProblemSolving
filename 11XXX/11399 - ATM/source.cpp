#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[1001] = {0};

int main(){
	int n,sum=0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	
	sort(arr, arr+n);
	
	for(int i=0; i<n; i++) sum += arr[i] * (n-i);
	printf("%d", sum);
	return 0;
}
