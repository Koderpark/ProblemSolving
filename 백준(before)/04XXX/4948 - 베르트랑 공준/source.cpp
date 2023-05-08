#include <stdio.h>

bool prime[246913] = {0};

int main(){
	int input = 0;
	int cnt = 0;
	prime[0] = 1;
	prime[1] = 1;
	for(int i=0; i<=246912; i++){
		if(prime[i] == 0){
			for(int j=i+i; j<=246912; j+=i) prime[j] = 1;
		}
	}
	while(true){
		cnt = 0;
		scanf("%d", &input);
		if(input == 0) break;
		for(int i=input+1; i<=input*2; i++) if(prime[i] != 1) cnt++;
		printf("%d\n", cnt);
	}
	return 0;
}
