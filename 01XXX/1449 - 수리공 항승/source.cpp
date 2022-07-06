#include <bits/stdc++.h>
using namespace std;

int pos[1234] = {0};

int main(){
	int n,l;
	cin >> n >> l;
	
	int ans = 0;
	int prev = -9999;
	
	for(int i=0; i<n; i++){
		cin >> pos[i];
	}
	
	sort(pos,pos+n);
	
	for(int i=0; i<n; i++){
		
		if(prev+l <= pos[i]){
			//printf("find : %d\n",i);
			ans++;
			prev = pos[i];
		}
	}
	
	cout << ans;
	return 0;
}
