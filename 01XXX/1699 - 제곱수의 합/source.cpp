#include <stdio.h>
#include <algorithm>


int arr[100001] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		arr[i] = i; // 1*1로만 접근하는 최악의 풀이.
		for(int j=1; j*j<=i; j++){
			arr[i] = std::min(arr[i], arr[i-j*j]+1);//기존 풀이와 타 풀이를 비교. 
		}
	}
	printf("%d", arr[n]);
	return 0;
} 
