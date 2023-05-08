#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string,string> arr;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n,m;
	string site, pass;
	cin >> n >> m;
	
	while(n--){
		cin >> site >> pass;
		arr.insert({site,pass});
	}
	while(m--){
		cin >> site;
		cout << arr[site] << "\n";
	}
}
