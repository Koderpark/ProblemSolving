#include <stdio.h>
#include <string>

using namespace std;
bool chk[25] = {0};
char input[10];

int main(){
	int m,x;
	string s;
	scanf("%d", &m);
	while(m--){
		scanf("%s", input);
		s = input;
		if(s == "add")    { scanf("%d", &x); chk[x] = true; }
		if(s == "remove") { scanf("%d", &x); chk[x] = false; }
		if(s == "check")  { scanf("%d", &x); printf("%d\n", chk[x]); }
		if(s == "toggle") { scanf("%d", &x); chk[x] = chk[x]?false:true; }
		if(s == "all")    for(int i=0; i<=20; i++) chk[i]=true;
		if(s == "empty")  for(int i=0; i<=20; i++) chk[i]=false;
	}
	return 0;
}
