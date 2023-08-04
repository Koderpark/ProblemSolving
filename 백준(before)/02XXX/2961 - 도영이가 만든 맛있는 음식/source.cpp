#include<bits/stdc++.h>
using namespace std;

vector<int> S;
vector<int> B;

int main(){
	int N,a,b;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a >> b;
		S.push_back(a);
		B.push_back(b);
	}
	
	int ans = 998244353;
	
	for(int i=1; i<(1<<N); i++){
		int tmp = i;
		int s=1;
		int b=0;
		for(int j=0; tmp; j++){
			if(tmp%2 == 1){
				s *= S[j];
				b += B[j];
			}
			tmp /= 2;
		}
		
		ans = min(ans, abs(s-b));
	}
	cout << ans;
	return 0;
}
