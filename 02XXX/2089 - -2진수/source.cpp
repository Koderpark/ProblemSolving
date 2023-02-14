#include <bits/stdc++.h>
using namespace std;

// -13 -> -2*7 + 1
// 7   -> -2*-3 + 1
// -3  -> -2*2 + 1
// 2   -> -2*-1 + 0
// -1  -> -2*1 + 1
// 1   -> -2*0 + 1

stack<int> s;

int main(){
	int N;
	cin >> N;
	
	do{
		int tmp = N%-2;
		N /= -2;
		
		if(tmp<0){
			N++;
			tmp = 1;
		}
		s.push(tmp);
	}while(N);
	
	while(!s.empty()){
		cout << s.top();
		s.pop();
	}
	return 0;
}
