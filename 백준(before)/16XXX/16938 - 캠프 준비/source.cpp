#include <bits/stdc++.h>
using namespace std;

int A[20] = {0};

int main(){
	int N,L,R,X;
	cin >> N >> L >> R >> X;
	for(int i=0; i<N; i++) cin >> A[i];
	
	int maxv;
	int minv;
	int sumv;
	
	int ans = 0;
	
	for(int bit=1; bit<(1<<N); bit++){
		sumv = 0;
		maxv = 0;
		minv = 998244353;
		
		for(int i=0; i<N; i++){
			if((bit & (1<<i))){ //고른경우임. 
				sumv += A[i];
				maxv = max(maxv, A[i]);
				minv = min(minv, A[i]);
			}
		}
		
		if(L<=sumv && sumv<=R && X<=(maxv-minv)){
			ans++;
		}
	}
	
	cout << ans;
	return 0;
}
