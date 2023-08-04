#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[123456];

ll one=0;
ll two=0;
ll sum=0;

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		one += (arr[i]%2);
		two += (arr[i]/2);
		sum += arr[i];
	}
	
	if(sum%3 != 0 || one > two) cout << "NO";
	else cout << "YES";
	return 0;
}
