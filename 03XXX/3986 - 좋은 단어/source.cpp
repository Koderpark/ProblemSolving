#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

stack<char> s;

char arr[123456] = {0};

int main(){
	int t;
	int ans = 0;
	scanf("%d", &t);
	while(t--){
		scanf("%s", arr);
		
		while(!s.empty())s.pop();
		int size = strlen(arr);
		
		for(int i=0; i<size; i++){
			if(!s.empty() && s.top() == arr[i]){ s.pop(); }
			else{ s.push(arr[i]); }
		}
		if(s.empty()) ans++;
	}
	printf("%d", ans);
	return 0;
}
