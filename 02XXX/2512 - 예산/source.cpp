#include <stdio.h>

typedef long long int ll;

ll n,m;
int arr[12345] = {0};

int min(int a, int b){return a>b?b:a;}
int max(int a, int b){return a>b?a:b;}

ll cal(int k){
	ll tmp = 0;
	for(int i=0; i<n; i++){
		tmp += min(k, arr[i]);
	}
	return tmp;
}

int search(int s, int e){
	while(s<e){
		int mid = (s+e)/2;
		ll val = cal(mid);
		if(val <= m) s = mid+1;
		if(val >  m) e = mid;
	}
	return s;
}

int main(){
	int maxv = 0;
	ll sum = 0;
	
	scanf("%lld", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		maxv = max(arr[i], maxv);
		sum += arr[i];
	}
	scanf("%lld", &m);
	
	if(sum <= m){
		printf("%d", maxv);
		return 0;
	}
	
	printf("%d", search(1,1000000000)-1);
	return 0;
}
