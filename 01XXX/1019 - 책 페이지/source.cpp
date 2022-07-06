#include <stdio.h>

int n, prev;
int cnt[10];

int main() {
	scanf("%d", &n);

	for (int i=1; n; i*=10){
		int now = n%10; 
		n /= 10;
		
		for (int j=0; j<now; j++) cnt[j] += (n+1)*i;
		cnt[now] += n*i + prev+1;
		
		for (int j=now+1; j<10; j++) cnt[j] += n*i;
		
		cnt[0] -= i;
		prev += now * i;
	}
	for (int i=0; i<10; i++) printf("%d ", cnt[i]);
	return 0;
}
