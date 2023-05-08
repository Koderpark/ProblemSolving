#include <bits/stdc++.h>
using namespace std;

set<int> s;

int arr[12] = {0};

int sum4(int a, int b, int c, int d){
	int res = 0;
	res += a;
	if(b>9) res*=10; res*=10; res += b;
	if(c>9) res*=10; res*=10; res += c;
	if(d>9) res*=10; res*=10; res += d;
	return res;
}

int sum3(int a, int b, int c){
	int res = 0;
	res += a;
	if(b>9) res*=10; res*=10; res += b;
	if(c>9) res*=10; res*=10; res += c;
	return res;
}

int sum2(int a, int b){
	int res = 0;
	res += a;
	if(b>9) res*=10; res*=10; res += b;
	return res;
}

int main(){
	int n,k;
	cin >> n >> k;
	for(int i=1; i<=n; i++) cin >> arr[i];
	
	for(int a=1; a<=n; a++){
		for(int b=1; b<=n; b++){
			if(a==b) continue;
			for(int c=1; c<=n; c++){
				if(a==c || b==c) continue;
				for(int d=1; d<=n; d++){
					if(a==d || b==d || c==d) continue;
					if(k==4) s.insert(sum4(arr[a],arr[b],arr[c],arr[d]));
				}
				if(k==3) s.insert(sum3(arr[a],arr[b],arr[c]));
			}
			if(k==2){
				s.insert(sum2(arr[a],arr[b]));
			}
		}
	}

	cout << s.size();
	return 0;
}
