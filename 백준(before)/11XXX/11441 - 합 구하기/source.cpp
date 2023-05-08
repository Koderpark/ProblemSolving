#include <bits/stdc++.h>
using namespace std;

int arr[123456] = {0};
int prefix[123456] = {0};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> arr[i];
		prefix[i] = arr[i] + prefix[i-1];
	}
	
	int M,a,b;
	cin >> M;
	for(int i=0; i<M; i++){
		cin >> a >> b;
		cout << prefix[b]-prefix[a-1] << "\n";
	}
	return 0;
}
