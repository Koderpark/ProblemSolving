#include <stdio.h>
#include <algorithm>

int input[100001] = {0};

int search(int arr[], int s, int e, int f){
	if(s>e) return 0;
	int mid=(s+e)/2;
	if(arr[mid] == f) return 1;
	else if(arr[mid] > f) return search(arr,s,mid-1,f);
	else return search(arr,mid+1,e,f);
}

int main(){
	int n,m,k;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &input[i]);
	std::sort(input, input+n);
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d", &k);
		printf("%d\n", search(input,0,n,k));
	}
	return 0;
}
