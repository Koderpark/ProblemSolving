#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,A=0,B=0,K;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> K;
		A += ((K/30)+1)*10;
		B += ((K/60)+1)*15;
	}
	
	if(A>B){
		cout << "M " << B;
	}
	else if(A<B){
		cout << "Y " << A;
	}
	else{
		cout << "Y M " << A;
	}
	return 0;
}
