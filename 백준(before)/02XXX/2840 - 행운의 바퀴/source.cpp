#include <bits/stdc++.h>
using namespace std;

char arr[50] = {0};
bool chk[256] = {0};

int main(){
	int N,K,a;
	int ptr=0;
	char b;
	
	cin >> N >> K;
	for(int i=0; i<N; i++) arr[i] = '?';
	for(int i=0; i<K; i++){
		cin >> a >> b;
		
		ptr = (ptr-a+N*99) % N;
		
		if(arr[ptr] != '?' && arr[ptr] != b){ printf("!"); return 0; }
		arr[ptr] = b;
	}
	
	for(int i=0; i<N; i++){
		if(arr[i] == '?') continue;
		for(int j=i+1; j<N; j++){
			if(arr[i] == arr[j]){ printf("!"); return 0; }
		}
	}
	
	for(int i=0; i<N; i++) cout << arr[(i+ptr)%N];
	return 0;
}
