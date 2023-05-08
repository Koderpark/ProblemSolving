#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N;
	
	for(int i=0; i<9; i++){
		cin >> M;
		N-=M;
	}
	
	cout << N;
	return 0;
}
