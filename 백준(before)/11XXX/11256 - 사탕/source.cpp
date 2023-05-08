#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int J,N,a,b;
		vector<int> box;
		cin >> J >> N;
		for(int i=0; i<N; i++){
			cin >> a >> b;
			box.push_back(a*b);
		}
		sort(box.begin(), box.end(), greater<int>());
		
		int ans = 0;
		while(J>0){
			J -= box[ans];
			ans++;
		}
		cout << ans << "\n";
	}
	return 0;
}
