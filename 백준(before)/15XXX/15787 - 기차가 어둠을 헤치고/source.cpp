#include <bits/stdc++.h>
using namespace std;

int arr[123456] = {0};

map<int, bool> m;


int main(){
	int N,M;
	int a,b,c;
	cin >> N >> M;
	
	for(int i=0; i<M; i++){
		cin >> a >> b;
		if(a==1){
			cin >> c;
			arr[b] |= (1<<c);
		}
		if(a==2){
			cin >> c;
			arr[b] &= ~(1<<c);
		}
		if(a==3){ arr[b] <<= 1; arr[b] &= ((1<<21)-1); }
		if(a==4){ arr[b] >>= 1; arr[b] &= (~1);}
	}
	
	for(int i=1; i<=N; i++){
		m[arr[i]] = true;
	}
	
	//for(auto k : m){ printf("{%d}", k.first); }
	cout << m.size();
	return 0;
}
