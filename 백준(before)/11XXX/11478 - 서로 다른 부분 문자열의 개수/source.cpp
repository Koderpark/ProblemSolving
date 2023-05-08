#include <bits/stdc++.h>
using namespace std;

set<string> s;

int main(){
	string sum;
	string input;
	cin >> input;
	
	int size = input.length();
	
	for(int i=0; i<size; i++){
		sum = "";
		for(int j=i; j<size; j++){
			sum += input[j];
			s.insert(sum);
		}
	}
	
	cout << s.size();
	return 0;
}
