#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(1){
		cin >> N;
		if(N==-1) break;
		
		int ans = 0;
		vector<int> v;
		for(int i=1; i*i<=N; i++){
			if(N%i==0){
				ans += i;
				ans += N/i;
				v.push_back(i);
				v.push_back(N/i);
			}
		}
		
		sort(v.begin(), v.end());
		
		if(ans-N != N) cout << N << " is NOT perfect.\n";
		else{
			cout << N << " = ";
			for(int i=0; i<v.size()-2; i++){
				cout << v[i] << " + ";
			}
			cout << v[v.size()-2] << "\n";
		}
	}
	return 0;
}
