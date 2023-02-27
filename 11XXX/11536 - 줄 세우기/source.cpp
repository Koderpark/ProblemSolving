#include <bits/stdc++.h>
using namespace std;

int N;

string arr[22];
string arr1[22];
string arr2[22];

int main(){
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		arr1[i] = arr2[i] = arr[i];
	}
	
	sort(arr1, arr1+N);
	sort(arr2, arr2+N);
	reverse(arr2, arr2+N);
	
	bool flag1 = true;
	bool flag2 = true;
	
	for(int i=0; i<N; i++){
		if(arr[i] != arr1[i]) flag1 = false;
		if(arr[i] != arr2[i]) flag2 = false;
	}
	
	if(flag1){
		cout << "INCREASING";
		return 0;
	}
	
	if(flag2){
		cout << "DECREASING";
		return 0;
	}
	
	cout << "NEITHER";
	return 0;
}
