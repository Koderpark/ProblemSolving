#include <bits/stdc++.h>
using namespace std;

vector<int> upward;
vector<int> downward;

int N,H,k;
int cnt[123456] = {0};

int cnt_up(int h){
	return upward.size() - (lower_bound(upward.begin(), upward.end(), h) - upward.begin());
}

int cnt_down(int h){
	return (lower_bound(downward.begin(), downward.end(), h) - downward.begin());
}

int main(){
	cin >> N >> H;
	
	for(int i=1; i<=N; i++){
		cin >> k;
		if(i%2 == 1) upward.push_back(k);
		else         downward.push_back(H-k);
	}
	
	sort(upward.begin(), upward.end());
	sort(downward.begin(), downward.end());
	
	int minv = 123456; 
	
	for(int i=1; i<=H; i++){
		int tmp = cnt_up(i)+cnt_down(i);
		cnt[tmp]++;
		minv = min(minv, tmp);
	}
	
	cout << minv << " " << cnt[minv];
	return 0;
}
