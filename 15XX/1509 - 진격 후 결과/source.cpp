#include <stdio.h>

int main(){
	int a;
	int arr[11][11] = {0};
	
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=1; i<=10; i++){
		scanf("%d", &a);
		if(a == 1){
			for(int j=10; j>=1; j--){
				if(arr[j][i] != 0){
					printf("%d %s\n", i, arr[j][i]>0?"crash":"fall");
					goto re;
				}
			}
			printf("%d %s\n", i, "safe");
			re:;
		}
	}
	return 0;
}
