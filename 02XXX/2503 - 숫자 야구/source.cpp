#include <stdio.h>
#include <string>

using namespace std;

bool chk[1001];

int main(){
	int n;
	int num,s,b;
	int ans=0;
	string tmp, input;
	scanf("%d", &n);
	for(int i=0; i<1001; i++) chk[i] = true;
	for(int i=100; i<=999; i++){
		tmp = to_string(i);
		if(tmp[0]==tmp[1] || tmp[1]==tmp[2] || tmp[0]==tmp[2]) chk[i] = false;
		if(tmp[0]=='0'    || tmp[1]=='0'    || tmp[2]=='0'   ) chk[i] = false;
	}
	
	for(int i=1; i<=n; i++){
		scanf("%d %d %d", &num, &s, &b);
		string input = to_string(num);
		for(int i=100; i<=999; i++){
			int cs = 0;
			int cb = 0;
			tmp = to_string(i);
			for(int j=0; j<3; j++) for(int k=0; k<3; k++){
				if(input[j]==tmp[k]){
					if(j==k) cs++;
					if(j!=k) cb++;
				}
			}
			if(cs!=s||cb!=b) chk[i]=false;
		}
	}
	
	for(int i=100; i<=999; i++) if(chk[i]) ans++;
	printf("%d", ans);
	return 0;
}
