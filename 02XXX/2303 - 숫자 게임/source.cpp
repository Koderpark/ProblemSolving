#include <bits/stdc++.h>
using namespace std;

int arr[5] = {0};
vector<pair<int,int>> v;

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		vector<bool> combi(5);
		combi[0] = combi[1] = combi[2] = true;
		
		
		for(int j=0; j<5; j++) cin >> arr[j];
		
		int ans = 0;
		int val;
		
		do{
			val = 0;
			for(int j=0; j<5; j++){
				if(combi[j]) val += arr[j];
			}
			ans = max(ans, val%10);
			
		}while(prev_permutation(combi.begin(), combi.end()));
		v.push_back({ans,i+1});
	}
	
	sort(v.begin(), v.end(), greater<pair<int,int>>());
	
	cout << v[0].second;
	return 0;
}
