#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

int K[123456][256];
int chkS[256] = {0};
int chkT[256] = {0};
int ans=1;
int ptr=0;

vector<int> idx[256];

int main(){
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	
	string S,T;
	cin >> S >> T;
	
	for(int i=0; i<S.length(); i++) chkS[S[i]]=1;
	for(int i=0; i<T.length(); i++){chkT[T[i]]=1; idx[T[i]].push_back(i);}
	
	int tmps=0;
	int tmpt=0;
	for(int i='a'; i<='z'; i++){
		sort(idx[i].begin(), idx[i].end());
		tmps+=chkS[i];
		tmpt+=chkT[i];
	}
	if(tmps==1 && chkS['a'] && tmpt==1 && chkT['a']){ // case #1 
		printf("%d\n", (S.length()+T.length()-1)/T.length());
		return 0;
	}
	
	memset(K, -1, sizeof(K));
	for(int i='a'; i<='z'; i++){
		ptr=0;
		if(!idx[i].size()) continue;
		for(int j=0; j<T.length(); j++){
			while(ptr < idx[i].size() && idx[i][ptr] < j) ptr++;
			if(ptr == idx[i].size()) K[j][i] = -1;
			else K[j][i] = idx[i][ptr];
		}
	}
	
	ptr=0;
	for(int i=0; i<S.length(); i++){
		if(chkT[S[i]] == 0){ puts("-1"); return 0; }
		re:;
		//printf("[%d위치에서 %c의 idx는 %d입니다]\n", ptr, S[i], K[ptr][S[i]]);
		if(K[ptr][S[i]] == -1){
			ans++;
			ptr=0;
			goto re;
		}else{
			ptr = K[ptr][S[i]]+1;
		}
	}
	printf("%d", ans);
	return 0;
}
