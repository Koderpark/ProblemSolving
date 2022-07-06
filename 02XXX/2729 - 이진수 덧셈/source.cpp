#include <iostream>
#include <string>

using namespace std;
int arr[123] = {0};

int main(){
	int t;
	string a,b;
	cin >> t;
	while(t--){
		for(int i=0; i<=100; i++) arr[i] = 0;
		cin >> a >> b;
		for(int i=0; i<a.length(); i++){ arr[a.length()-i-1] += a[i]-'0'; }
		for(int i=0; i<b.length(); i++){ arr[b.length()-i-1] += b[i]-'0'; }
		for(int i=0; i<100; i++){
			if(arr[i] >= 2){
				arr[i] -= 2;
				arr[i+1]++;
			}
		}
		int chk = 0;
		for(int i=100; i>=0; i--){
			if(arr[i] == 1) chk = 1;
			if(chk) printf("%d", arr[i]);
		}
		if(chk == 0) printf("0");
		puts("");
	}
	return 0;
}
