#include <bits/stdc++.h>
using namespace std;

int cnt0 = 0;
int cnt1 = 0;

int main(){
	int N,tmp;
	cin >> N;
	while(N--){
		cin >> tmp;
		if(tmp) cnt1++;
		else cnt0++;
	}
	if(cnt1>cnt0) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
	return 0;
}
