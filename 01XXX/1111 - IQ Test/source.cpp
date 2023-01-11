#include <bits/stdc++.h>
using namespace std;

int arr[56] = {0};
int tmparr[56] = {0};

vector<pair<int,int>> ans;
map<int,int> m;

int main(){
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++) cin >> arr[i];
	
	if(n==1){ cout << "A"; return 0; }
	if(n==2 && (arr[0] != arr[1])) { cout << "A"; return 0; }
	if(arr[0] == arr[1]){
		if(n!=2){
			for(int i=2; i<n; i++){
				if(arr[i] != arr[0]){
					cout << "B";
					return 0;
				}
			}
			cout << arr[0];
			return 0;
		}
		else{
			cout << arr[0];
			return 0;
		}
	}
	
	int a = (arr[2]-arr[1]) / (arr[1]-arr[0]); // 와 진짜 머리 짱좋은듯;;이게뭐임 
	int b = arr[1] - (arr[0]*a);

	for(int i=0; i<n-1; i++){
		if(arr[i]*a+b != arr[i+1]){
			cout << "B";
			return 0;
		}
	}
	cout << arr[n-1]*a+b;
	return 0;
}
