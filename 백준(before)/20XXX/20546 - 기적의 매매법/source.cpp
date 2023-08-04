#include <bits/stdc++.h>
using namespace std;

int arr[20] = {0};

int N;

int JH(){
	int cash = N;
	int stock = 0;
	
	for(int i=0; i<14; i++){
		stock += cash/arr[i];
		cash %= arr[i];
	}
	
	return cash + stock * arr[13];
}

int SM(){
	int cash = N;
	int stock = 0;
	
	for(int i=3; i<14; i++){
		if(
			arr[i-3] < arr[i-2] &&
			arr[i-2] < arr[i-1] &&
			arr[i-1] < arr[i]
		){
			cash += stock * arr[i];
		}
		
		if(
			arr[i-3] > arr[i-2] &&
			arr[i-2] > arr[i-1] &&
			arr[i-1] > arr[i]
		){
			stock += cash/arr[i];
			cash %= arr[i];
		}
	}
	return cash + stock * arr[13];
}

int main(){
	cin >> N;
	for(int i=0; i<14; i++) cin >> arr[i];
	
	int jh = JH();
	int sm = SM();
	
	if(jh > sm) 	 cout << "BNP";
	else if(jh < sm) cout << "TIMING";
	else 			 cout << "SAMESAME";
	return 0;
}

