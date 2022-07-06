#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm> 

char arr[11][10];
int table[128] = {0}; // 문자 - 숫자 대응 배열.

int main(){
	int n,tmp,sum=9,ans=0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", &arr[i]);
		tmp = strlen(arr[i]);
		for(int j=0; j<tmp; j++){
			table[arr[i][j]] += pow(10, tmp-j-1);
		}
	}
	
	std::sort(table, table + 128);
	for(int i=127; i>=0; i--){
		if(table[i] == 0) continue;
		ans += table[i] * sum;
		sum--;
	}
	printf("%d", ans);
}
