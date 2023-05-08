#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

int arr[123] = {0};
int now[123] = {0};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,k;
	int ans;
	int tmp;
	
	cin >> n >> k;
	for(int i=0; i<k; i++){ cin >> arr[i]; }
	
	for(int i=0; i<k; i++){
		bool flag = 0;
		
		for(int j=0; j<n; j++) if(now[j] == arr[i]){ flag = true; break; }
		if(flag) continue;
		
		for(int j=0; j<n; j++){
			if(now[j] == 0){
				now[j] = arr[i];
				flag = true;
				break;
			}
		}
		if(flag) continue;
		
		int idx = 0;
		int cnt = 0;
		for(int j=0; j<n; j++){
			int tmp = 0;
			int ptr = i+1;
			while(ptr<k && now[j] != arr[ptr]){ tmp++; ptr++; }
			if(tmp > cnt){
				cnt = tmp;
				idx = j;
			}
		}
		ans++;
		now[idx] = arr[i];
	}
	cout << ans;
	return 0;
}
