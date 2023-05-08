#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int f(int a, int b){
	if(a<b) return 0;
	else{
		ans += a/b;
		return f(a/b + a%b, b);
	}
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	f(a,b);
	printf("%d", ans);
	return 0;
}
