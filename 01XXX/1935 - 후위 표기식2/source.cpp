#include <bits/stdc++.h>
using namespace std;

int arr[50] = {0};
stack<double> st;

int main(){
	cout << fixed;
	cout.precision(2);
	int N;
	string s;
	cin >> N;
	cin >> s;
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<s.length(); i++){
		if('A' <= s[i] && s[i] <= 'Z'){
			st.push((double)(arr[s[i] - 'A']));
		}
		else{
			double a = st.top(); st.pop();
			double b = st.top(); st.pop();
			
			if(s[i] == '*') st.push(b*a);
			if(s[i] == '+') st.push(b+a);
			if(s[i] == '-') st.push(b-a);
			if(s[i] == '/') st.push(b/a);
		}
	}
	
	cout << st.top();
	return 0;
}
