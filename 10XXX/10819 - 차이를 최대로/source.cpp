#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main(){
	int n;
	int ans = 0;
	int tmp;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}
	
	sort(arr.begin(), arr.end());
	do{
		tmp = 0;
		for(int i=1; i<n; i++) tmp += abs(arr[i-1] - arr[i]);
		ans = max(ans, tmp);
	}while(next_permutation(arr.begin(), arr.end()));
	printf("%d", ans);
	return 0;
}
