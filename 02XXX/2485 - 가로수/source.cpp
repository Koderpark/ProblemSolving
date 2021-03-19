#include <stdio.h>
#include <algorithm>

using namespace std;
typedef long long int ll;

int input[123456] = {0};
int arr[123456]   = {0};

ll gcd(ll a, ll b){
	while(b!=0){
		ll r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &input[i]);
	
	sort(input, input+n);
	for(int i=1; i<n; i++){ arr[i] = input[i]-input[i-1]; }
	for(int i=2; i<n; i++){ arr[i] = gcd(arr[i], arr[i-1]); }
	
	printf("%d", (input[n-1]-input[0])/arr[n-1]-n+1);
	return 0;
}
