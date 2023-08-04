#include <bits/stdc++.h>
using namespace std;

int rev(int k){
	int ans = 0;
	while(k){
		ans *= 10;
		ans += k%10;
		k/=10;
	}
	return ans;
}

bool sleve[2000000] = {0};

int main(){
	
	sleve[0] = 1;
	sleve[1] = 1;
	for(int i=2; i<2000000; i++){
		if(sleve[i]) continue;
		for(int j=i+i; j<2000000; j+=i) sleve[j] = true;
	}
	
	int N;
	cin >> N;
	for(int i=N; i<2000000; i++){
		if(!sleve[i] && rev(i) == i){
			cout << i;
			return 0;
		}
	}
	return 0;
}
