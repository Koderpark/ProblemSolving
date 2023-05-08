#include <bits/stdc++.h>
using namespace std;

set<string> s;
string arr[1234];

int main(){
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	int M = arr[0].length();
	int ans = 0;
	
	for(int i=M; i>=0; i--){
		s.clear();
		for(int j=0; j<N; j++){
			s.insert(arr[j].substr(i));
		}
		
		if(s.size() == N){
			//cout << arr[0].substr(i);
			ans = i;
			break;
		}
	}
	
	cout << M-ans;
	return 0;
}
