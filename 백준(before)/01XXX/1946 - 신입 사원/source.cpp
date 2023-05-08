#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

pair<int,int> sc[123456];

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int N;
		cin >> N;
		for(int i=0; i<N; i++) cin >> sc[i].x >> sc[i].y;
		
		sort(sc, sc+N);
		
		int score = sc[0].y;
		int count = 0;
		
		for(int i=1; i<N; i++){
			if(score > sc[i].y) score = sc[i].y;
			else count++;
		}
		cout << N-count << "\n";
	}
	return 0;
}
