#include <stdio.h>

int swit[123] = {0};

int main(){
	int n,m;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &swit[i]);
	
	int gender, num, s, e;
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &gender, &num);
		if(gender == 1){
			for(int i=num; i<=n; i+=num){
				swit[i] ^= 1;
			}
		}
		if(gender == 2){
			s = e = num;
			while(1){
				s--;
				e++;
				if(s<1 || n<e){ break; }
				if(swit[s] != swit[e]){ break; }
			}
			s++;
			e--;
			for(int i=s; i<=e; i++){
				swit[i] ^= 1;
			}
		}
	}
	for(int i=1; i<=n; i++){ 
		if(i%20 == 0) printf("%d\n", swit[i]);
		else printf("%d ", swit[i]);
	}
	return 0;
}
