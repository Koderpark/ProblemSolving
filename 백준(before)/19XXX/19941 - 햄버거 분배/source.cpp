#include <stdio.h>

char input[23456] = {0};

int max(int a,int b){ return a>b?a:b; }
int min(int a,int b){ return a>b?b:a; }

int main(){
	int n;
	int k;
	int ans = 0;
	scanf("%d %d", &n, &k);
	scanf("%s", &input);
	
	for(int i=0; i<n; i++){
		if(input[i] == 'P'){
			
			for(int j=max(0,i-k); j<=i+k; j++){
				if(input[j] == 'H'){
					//printf("find %d, %d\n", i, j);
					ans++;
					input[j] = 0;
					input[i] = 0;
					break;
				}
			}
		}
	}
	printf("%d", ans);
	return 0;
}
