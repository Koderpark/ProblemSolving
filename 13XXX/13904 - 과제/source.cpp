#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
int score[1234] = {0};

int main(){
	int n,a,b;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		v.push_back({-b,a});
	}
	
	sort(v.begin(), v.end());
	
	for(auto k : v){
		for(int j=k.second; j>=1; j--){
			if(score[j] == 0){
				score[j] = -k.first;
				break;
			}
		}
	}
	
	int ans = 0;
	for(int i=0; i<1234; i++){
		ans += score[i];
		/*if(score[i] != 0){
			printf("%d : %d\n", i, score[i]);
		}*/
	}
	cout << ans;
	return 0;
}
