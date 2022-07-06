#include <bits/stdc++.h>
using namespace std;

char arr[1234567] = {0};

int main(){
	scanf("%s", arr);
	int n = strlen(arr);
	
	int cnt = 0;
	for(int i=1; i<n; i++){
		if(arr[i] != arr[i-1]) cnt++;
	}
	printf("%d", (cnt+1)/2);
	return 0;
}
