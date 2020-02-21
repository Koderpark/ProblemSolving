#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;

int main(){
	stack<int> s;
	int n,tmp;
	char str[10] = {0};
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", &str);
		if(strcmp(str, "push") == 0){
			scanf("%d", &tmp);
			s.push(tmp);
		}
		if(strcmp(str,  "pop") == 0){
			if(s.empty()) printf("-1\n");
			else {
				printf("%d\n", s.top());
				s.pop();
			}
		}
		if(strcmp(str, "size") == 0){
			printf("%d\n", s.size());
		}
		if(strcmp(str,"empty") == 0){
			printf("%d\n", s.empty());
		}
		if(strcmp(str,  "top") == 0){
			if(s.empty()) printf("-1\n");
			else printf("%d\n", s.top());
		}
	}
	return 0;
}
