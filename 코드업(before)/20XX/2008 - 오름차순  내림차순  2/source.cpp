#include <bits/stdc++.h>
using namespace std;

int arr1[123] = {0};
int arr2[123] = {0};
int arr3[123] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr1[i]);
		arr2[i] = arr1[i];
		arr3[i] = arr1[i];
	}
	
	sort(arr2, arr2+n, greater<int>());
	sort(arr3, arr3+n, less<int>());
	
	
	bool flag2 = true;
	bool flag3 = true;
	for(int i=0; i<n; i++){
		if(arr1[i] != arr2[i]) flag2 = false;
		if(arr1[i] != arr3[i]) flag3 = false;
	}
	
	if(arr2[0] == arr2[n-1]){
		puts("섞임");
		return 0;
	}
	
	if(!flag2 && !flag3) puts("섞임");
	else if(!flag2) puts("오름차순");
	else if(!flag3) puts("내림차순");
	return 0;
}
