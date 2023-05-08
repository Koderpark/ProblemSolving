#include <bits/stdc++.h>
using namespace std;

int arr[10] = {0};
bool chk[10] = {false};

int main(){
	int N,M,K;
	scanf("%d %d", &N, &M);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	sort(arr,arr+N);
	
	for(int i=0; i<M; i++) chk[i] = true;
	
	do{
		for(int i=0; i<N; i++){
			if(chk[i]){
				printf("%d ", arr[i]);
			}
		}
		printf("\n");
	}while(prev_permutation(chk,chk+N));
	return 0;
}
