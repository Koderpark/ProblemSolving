#include <bits/stdc++.h>
using namespace std;

char arr[123456] = {0};
bool flag = false;
stack<char> s;

int main(){
	fgets(arr, 123456, stdin);
	
	int len = strlen(arr);
	for(int i=0; i<len; i++){
		if(('a' <= arr[i] && arr[i] <= 'z') || ('0' <= arr[i] && arr[i] <= '9')){
			if(flag) printf("%c", arr[i]);
			else s.push(arr[i]);
		}
		else{
			if (arr[i] == '<'){ flag = true; }
			if (arr[i] == '>'){ flag = false; }
			
			while(!s.empty()){
				printf("%c", s.top());
				s.pop();
			}
			printf("%c", arr[i]);
		}
	}
	
	while(!s.empty()){
		printf("%c", s.top());
		s.pop();
	}
	
	return 0;
}
