#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int n,l;
	scanf("%d %d", &n, &l);
	
	for(int i=l; i<=100; i++){
		int e = (n/i) + (i/2);
		int s = e - i + 1;
		
		if(s<0 || n<e){ printf("-1"); return 0; }
		
		int sum = 0;
		for(int j=s; j<=e; j++) sum += j;
		if( sum == n ){
			for(int j=s; j<=e; j++){ printf("%d ", j); }
			return 0;
		}
	}
	printf("-1");
	return 0;
}
