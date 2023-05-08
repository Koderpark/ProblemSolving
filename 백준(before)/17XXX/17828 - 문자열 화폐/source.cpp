#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	if(n*26 < x || n > x){ printf("!"); return 0; }
	while((n-1)*26 > x){
		printf("A");
		x--;
		n--;
	}
	printf("%c", 64 + x - (n-1)*26);
	for(int i=1; i<n; i++) printf("Z");
	return 0;
}
