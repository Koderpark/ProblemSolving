#include <stdio.h>
#include <queue>
#include <string.h>

std::queue<int> q;
char input[10] = {0};

int main(){
	int n,t;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", input);

		if(strcmp(input, "push") == 0){
			scanf(" %d", &t);
			q.push(t);
		}
		else if(strcmp(input, "pop") == 0){
			if(q.size() == 0) puts("-1");
			else{ printf("%d\n", q.front()); q.pop(); }
		}
		else if(strcmp(input, "size")  == 0) printf("%d\n", q.size());
		else if(strcmp(input, "empty") == 0) printf("%d\n", q.empty());
		else if(strcmp(input, "front") == 0){
			if(q.size() == 0) puts("-1");
			else printf("%d\n", q.front());
		}
		else if(strcmp(input, "back")  == 0){
			if(q.size() == 0) puts("-1");
			else printf("%d\n", q.back());
		}
	}
	return 0;
}
