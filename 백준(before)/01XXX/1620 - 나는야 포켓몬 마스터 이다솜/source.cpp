#include <iostream>
#include <map>
#include <algorithm>
#include <utility>
#include <cctype>

using namespace std;

map<string,int> s;
string arr[543210];

bool isNum(string str)
{
    for (char c : str) if (isdigit(c) == 0) return false;
    return true;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m;
	int tmp;
	string a;
	
	cin >> n >> m;
	for(int i=1; i<=n; i++){ cin >> a; s.insert({a,i}); arr[i] = a;}
	
	for(int i=1; i<=m; i++){
		cin >> a;
		if(isNum(a)) cout << arr[stoi(a)] << "\n";
		else cout << s[a] << "\n";
	}
}
