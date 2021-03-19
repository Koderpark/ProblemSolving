#include <stdio.h>

struct p1{
	char name[11];
	int score;
};

struct p1 person[101];

int main(){
	int n,m;
	int min;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++){
		scanf("%s %d", &person[i].name, &person[i].score);
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(person[i].score >= person[j].score){
				person[101] = person[j];
				person[j] = person[i];
				person[i] = person[101];
			}
		}
	}
	
	for(int i=0; i<m; i++, puts("")){
		printf("%s", person[i].name);
	}
	return 0;
}
