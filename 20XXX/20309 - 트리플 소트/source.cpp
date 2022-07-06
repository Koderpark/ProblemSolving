#include <stdio.h>

int arr[345678] = {0};

int main(){
	int n;
	bool ans = true;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	for(int i=0; i<n; i++) if(i%2 == arr[i]%2) ans = false;
	
	printf("%s", ans?"YES":"NO");
	return 0;
} 
