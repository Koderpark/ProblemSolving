#include <stdio.h>

int arr[1010] = {0};

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	for(int i=2; i<=n; i++){
		if(arr[i] == 0){
			for(int j=i; j<=n; j+=i){
				if(arr[j] == 0){
					arr[j] = 1;
					k--;
					if(k==0) printf("%d", j);
				}
			}
		}
	}
	return 0;
}
