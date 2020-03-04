#include <stdio.h>
#include <algorithm>
using namespace std;

int input[100001] = {0};

int main(){
	int n,max=-1;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &input[i]);
	}
	sort(input, input+n);
	for(int i=0; i<n; i++){
		if(max < input[i] * (n-i)) max = input[i]*(n-i);
	}
	printf("%d", max);
	return 0;
}
