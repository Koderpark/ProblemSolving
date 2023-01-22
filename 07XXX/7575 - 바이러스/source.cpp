#include <bits/stdc++.h>
using namespace std;

int N,K;
vector<int> v[123];
int fail[1234] = {0};

bool kmp(vector<int> find, vector<int> arr){
	int N = find.size();
	int M = arr.size();
	memset(fail, 0, sizeof(fail));
	
	//puts("----------------------");
	//printf("find - ["); for(int i : find) printf("%d ", i); printf("]\n");
	//printf("arr  - ["); for(int i : arr)  printf("%d ", i); printf("]\n");
	
	
	for(int i=0,j=1; j<N; j++){
		while(i>0 && find[i] != find[j]) i = fail[i-1];
		if(find[i] == find[j]) fail[j] = ++i;
	}
	
	for(int i=0,j=0; j<M; j++){
		while(i>0 && find[i] != arr[j]) i = fail[i-1];
		if(find[i] == arr[j]){
			if(i == N-1){
				return 1;
			}
			else i++;
		}
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N >> K;
	for(int i=0; i<N; i++){
		int a,b;
		cin >> a;
		for(int j=0; j<a; j++){
			cin >> b;
			v[i].push_back(b);
		}
	}
	
	for(int a=0; a<=v[0].size()-K; a++){
		vector<int> comp(v[0].begin()+a, v[0].begin()+a+K);
		
		bool flag = true;
		for(int b=1; b<N; b++){
			bool res1 = kmp(comp,v[b]);
			reverse(v[b].begin(), v[b].end());
			
			bool res2 = kmp(comp,v[b]);
			reverse(v[b].begin(), v[b].end());
			
			flag = flag && (res1 || res2);
		}
		
		if(flag){
			cout << "YES";
			return 0;	
		}
	}
	
	cout << "NO";
	return 0;
}
