#include <stdio.h>

typedef long long int ll;

ll fenwick[2048][2048] = {0};
int n,m;
int arr[2048][2048] = {0};

ll query(int x, int y){
	ll ret = 0;
	for(int i=x; i>0; i -= (i&-i)){
		for(int j=y; j>0; j -= (j&-j)){
			ret += fenwick[i][j];
		}
	}
	return ret;
}

void update(int x, int y, ll val){
	for(int i=x; i<=n; i += (i&-i)){
		for(int j=y; j<=n; j += (j&-j)){
			fenwick[i][j] += val;
		}
	}
}

int main(){
	int q;
	int a,b,c,d;
	ll val;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%lld", &arr[i][j]);
			update(i,j,arr[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		scanf("%d", &q);
		if(q==0){
			scanf("%d %d %d", &a, &b, &c);
			update(a,b,c-arr[a][b]);
			arr[a][b] = c;
		}
		if(q==1){
			val = 0;
			scanf("%d %d %d %d", &a, &b, &c, &d);
			val += query(c,d);
			val += query(a-1,b-1);
			val -= query(a-1,d);
			val -= query(c,b-1);
			printf("%lld\n", val);
		}
	}
	return 0;
}
