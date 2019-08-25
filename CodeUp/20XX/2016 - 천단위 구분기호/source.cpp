#include <stdio.h>
#include <queue>

using namespace std;

int main(){
	int n;
	char c;
	queue<char> q;
	
	scanf("%d", &n);
	for(int i=0; i<=n; i++){
		scanf("%c", &c);
		q.push(c);
	}
	for(int i=0; i<=n; i++){
		if((n-i+1)%3 == 0) printf(",");
		printf("%c", q.front());
		q.pop();
	}
	
}
