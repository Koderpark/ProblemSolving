#include <bits/stdc++.h>
using namespace std;

int parent[345678] = {0};

int find(int k){
	if(parent[k] == k) return k;
	return parent[k] = find(parent[k]);
}

void joint(int a, int b){
	a = find(a);
	b = find(b);
	
	if(a!=b) parent[a] = b;
	return;
}

int main(){
	for(int i=0; i<345678; i++) parent[i] = i;
	int N;
	int a,b;
	
	cin >> N;
	
	for(int i=0; i<N-2; i++){
		cin >> a >> b;
		joint(a,b);
	}
	
	int tmp;
	tmp = find(1);
	for(int i=2; i<=N; i++){
		if(tmp != find(i)){
			cout << "1 " << i << "\n";
			return 0;
		}
	}
	return 0;
}
