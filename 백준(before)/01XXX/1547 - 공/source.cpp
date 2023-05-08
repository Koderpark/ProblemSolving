#include <bits/stdc++.h>
using namespace std;

int arr[4] = {0};

void swap(int a, int b){
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
	return;
}

int main(){
	arr[1] = 1;
	int N,a,b;
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a >> b;
		swap(a,b);
	}
	
	for(int i=1; i<=3; i++){
		if(arr[i] == 1) cout << i;
	}
	
	return 0;
}
