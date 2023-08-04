#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
map<string,int> m;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	int ans = 0;
	string s;
	
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> s;
		m[s] = i;
	}
	
	for(int i=0; i<N; i++){
		cin >> s;
		arr[i] = m[s];
	}
	
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(arr[j] < arr[i]){
				ans++;
				break;
			}
		}
	}
	
	cout << ans;
	return 0;
}
