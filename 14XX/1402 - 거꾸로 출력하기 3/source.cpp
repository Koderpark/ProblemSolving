#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	int n;
	int a;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		v.push_back(a);
	}
	reverse(v.begin(), v.end());
	
	for(int i=0; i<n; i++){
		printf("%d ", v[i]);
	}
	return 0;
}
