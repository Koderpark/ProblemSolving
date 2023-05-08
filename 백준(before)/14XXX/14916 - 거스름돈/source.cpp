#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	if(n==1 || n==3){ printf("-1"); return 0; }
	
	int ans = 0;
	if(n%10 == 1){ ans+=3; n-=6; }
	if(n%10 == 3){ ans+=4; n-=8; }
	if(n%10 == 7){ ans+=1; n-=2; }
	if(n%10 == 9){ ans+=2; n-=4; }
	
	
	if(n%5 == 0){ ans += n/5; }
	else{ ans += (n/10)*2 + (n%10)/2; }
	printf("%d", ans);
	return 0;
}
