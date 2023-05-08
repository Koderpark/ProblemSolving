#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

int N,K;

int sumstr(string &s){
	int ret = 0;
	for(int i=0; i<s.length(); i++){
		if('1'<=s[i] && s[i]<='3'){
			ret += s[i]-'0';
		}
	}
	return ret;
}

void dfs(string now){
	int val = sumstr(now);
	if(val > N) return;
	if(val == N){ ans.push_back(now); return; }
	
	dfs(now+"+1");
	dfs(now+"+2");
	dfs(now+"+3");
	
	return;
}

int main(){
	cin >> N >> K;
	dfs("1");
	dfs("2");
	dfs("3");
	
	sort(ans.begin(), ans.end());
	
	//for(auto s : ans){ cout << "[" << s << "]\n"; }
	
	if(ans.size() < K){
		cout << -1;
		return 0;
	}
	cout << ans[K-1];
	return 0;
}
