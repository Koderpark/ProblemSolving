#include <bits/stdc++.h>
using namespace std;

char arr[12] = {0};

vector<int> v = {0,1,2,3,4,5,6,7,8,9};
string maxans = "0000000000";
string minans = "9999999999";

int main(){
	int  n;
	char tmp;
	scanf("%d", &n);
	scanf("%c", &tmp);
	for(int i=0; i<n; i++){ scanf("%c", &arr[i]); scanf("%c", &tmp); }
	
	do{
		string s;
		bool flag = true;
		for(int i=0; i<n; i++){
			if(arr[i] == '<') if(v[i] > v[i+1]) flag = false;
			if(arr[i] == '>') if(v[i] < v[i+1]) flag = false;
		}
		if(flag){
			for(int i=0; i<=n; i++) s += (v[i]+'0');
			maxans = max(s, maxans);
			minans = min(s, minans);
		}
	}while(next_permutation(v.begin(), v.end()));
	
	cout << maxans << "\n";
	cout << minans << "\n";
	return 0;
}
