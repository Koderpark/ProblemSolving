#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int t;
	int n;
	int arr[101] = {0};
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		int min = 999;
		int max = -1;
		int vmax = -1;
		scanf("%d", &n);
		for(int i=0; i<n; i++) scanf("%d", &arr[i]);
		for(int i=0; i<n; i++) if(max < arr[i]) max = arr[i];
		for(int i=0; i<n; i++) if(min > arr[i]) min = arr[i];
		sort(arr, arr+n);
		for(int i=0; i<n-1; i++) if(vmax < arr[i+1]-arr[i]) vmax = arr[i+1]-arr[i];
		printf("Class %d\n", k);
		printf("Max %d, Min %d, Largest gap %d\n", max, min, vmax);
	}
	return 0;
}
