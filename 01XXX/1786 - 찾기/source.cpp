#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

char s1[1234567];
char s2[1234567];

int fail[1234567] = {0};

int main(){
	int n,m;
	vector<int> v;
	
	cin.getline(s1,1000001);
	cin.getline(s2,1000001);
	
	//fgets(s1, 1000001, stdin);
	//fgets(s2, 1000001, stdin);
	
	n = strlen(s1);
	m = strlen(s2);
	
	//printf("[%s] [%s]\n", s1, s2);
	
	for(int i=1,j=0; i<m; i++){
		while(j && s2[i] != s2[j]) j = fail[j-1];
		if(s2[i] == s2[j]) fail[i] = ++j;
	}
	
	for(int i=0,j=0; i<n; i++){
		while(j && s1[i] != s2[j]) j = fail[j-1];
		if(s1[i] == s2[j]){
			if(j == m-1){
				v.push_back(i-m+2);
				j = fail[j];
			}
			else j++;
		}
	}
	
	printf("%d\n", v.size());
    for(int i=0; i<v.size(); i++) printf("%d ", v[i]);
	return 0;
}
