#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[1234] = {0};
	cin.getline(s,1000);
	
	int p1=-1;
	int p2=-1;
	int p3=-1;
	int p4=-1;
	
	for(int i=0;    i<1000; i++) if(s[i] == 'U'){ p1 = i; break; }
	for(int i=p1+1; i<1000; i++) if(s[i] == 'C'){ p2 = i; break; }
	for(int i=p2+1; i<1000; i++) if(s[i] == 'P'){ p3 = i; break; }
	for(int i=p3+1; i<1000; i++) if(s[i] == 'C'){ p4 = i; break; }
	
	if(p1==-1 || p2==-1 || p3==-1 || p4==-1) cout << "I hate UCPC";
	else cout << "I love UCPC";
	return 0;
}
