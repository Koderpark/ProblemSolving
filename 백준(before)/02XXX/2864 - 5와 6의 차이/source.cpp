#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int MINV(int k){
	while(k){
		if(k%10 == 5 || k%10 == 6) s.push(5);
		else s.push(k%10);
		k/=10;
	}
	
	int ans = 0;
	while(!s.empty()){
		ans *= 10;
		ans += s.top(); s.pop();
	}
	return ans;
}


int MAXV(int k){
	while(k){
		if(k%10 == 5 || k%10 == 6) s.push(6);
		else s.push(k%10);
		k/=10;
	}
	
	int ans = s.top(); s.pop();
	while(!s.empty()){
		ans *= 10;
		ans += s.top(); s.pop();
	}
	return ans;
}

int main(){
	int A, B;
	cin >> A >> B;
	//printf("[%d]", MINV(11));
	cout << MINV(A) + MINV(B) << " " << MAXV(A) + MAXV(B);
}
