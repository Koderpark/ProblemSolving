#include <stdio.h>
#include <string.h>
#include <deque>

std::deque<int> d;

int main(){
	int n,t;
	char s[20];
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%s", s);
		if	   (strcmp(s,"push_front") == 0) { scanf(" %d", &t); d.push_front(t); }
		else if(strcmp(s,"push_back")  == 0) { scanf(" %d", &t); d.push_back(t);  }
		else if(strcmp(s,"pop_front")  == 0) { if(d.empty()) puts("-1"); else { printf("%d\n", d.front()); d.pop_front(); } }
		else if(strcmp(s,"pop_back")   == 0) { if(d.empty()) puts("-1"); else { printf("%d\n", d.back());  d.pop_back();  } }
		else if(strcmp(s,"size")       == 0) { printf("%d\n", d.size());  }
		else if(strcmp(s,"empty")      == 0) { printf("%d\n", d.empty()); }
		else if(strcmp(s,"front")      == 0) { printf("%d\n", d.empty()?-1:d.front()); }
		else if(strcmp(s,"back")       == 0) { printf("%d\n", d.empty()?-1:d.back());  }
	}
}

