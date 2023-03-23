#include <bits/stdc++.h>
using namespace std;

int cnt[1234] = {0};
vector<int> v;

void swap(int a, int b){
	int tmp = v[a];
	v[a] = v[b];
	v[b] = tmp;
	return;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,k;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(), v.end());
	
	int M=v.size();
	int ptr = 0;
	
	/*while(M){
		if(M >= 3){
			M -= 3;
			swap(ptr+1, ptr+2);
			ptr += 3;
		}
		
		else if(M == 2){
			M -= 2;
			swap(ptr, ptr+1);
			ptr += 2;
		}
		
		else if(M == 1){
			M -= 1;
		}
	}*/
	
	v.push_back(998244353);
	v.push_back(998244353);
	
	if(v.size() == 2 && v[1]-v[0] == 1){
		swap(1,0);
	}
	
	for(int i=0; i<v.size(); i++){
		if(v[i+2]-v[i+1] == 1 && v[i+1]-v[i] == 1){
			swap(i+2, i+1);
			i+=3;
		}
		
		else if(v[i+1]-v[i] == 1){
			swap(i+1, i);
			i+=2;
		}
	}
	
	
	
	for(auto k : v){
		if(k != 998244353){
			cout << k << " ";	
		}
	}
	return 0;
}
