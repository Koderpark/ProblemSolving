#include <bits/stdc++.h>
using namespace std;

char arr[1234][56] = {0};
char ans[56] = {0};

int a,c,g,t;

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%s", &arr[i]);
	}
	
	int var = 0;
	for(int i=0; i<m; i++){
		a=0;
		c=0;
		g=0;
		t=0;
		for(int j=0; j<n; j++){
			//printf("[%c]", arr[j][i]);
			if(arr[j][i] == 'A') a++;
			if(arr[j][i] == 'C') c++;
			if(arr[j][i] == 'G') g++;
			if(arr[j][i] == 'T') t++;
		}
		
		if(max({a,c,g,t}) == a){
			ans[i] = 'A';
			var += (c+g+t);
		}
		else if(max({a,c,g,t}) == c){
			ans[i] = 'C';	
			var += (a+g+t);
		}
		else if(max({a,c,g,t}) == g){
			ans[i] = 'G';
			var += (a+c+t);
		}
		else{
			ans[i] = 'T';
			var += (a+c+g);
		}
	}
	printf("%s\n", ans);
	printf("%d", var);
	return 0;
}
