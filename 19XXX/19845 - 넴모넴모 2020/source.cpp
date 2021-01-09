#include <stdio.h>
#include <algorithm>

using namespace std;

int nemo[543210] = {0};

int search(int k, int s, int e){
	int mid;
	while(s<e){
		mid = (s+e)/2;
		if(nemo[mid] >= k){ s = mid + 1; }
		else{ e = mid; }
	}
	return s;
}

int main(){
	int n,q;
	int res;
	int tmp;
	int x,y;
	
	scanf("%d %d", &n, &q);
	for(int i=1; i<=n; i++) scanf("%d", &nemo[i]);
	
	for(int i=0; i<q;  i++){
		scanf("%d %d", &x, &y);
		if(nemo[n] >= x) res = 1;
		else             res = 0;
		
		tmp = search(x,1,n);
		
		if( nemo[y]-x <0 || tmp-y <0 ) printf("0\n");
		else{
			printf("%d\n", res + nemo[y]-x + tmp-y);
		}
	}
	return 0; 
}
