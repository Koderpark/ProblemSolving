#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
struct JUDGE{ int priority; int age; char name[101]; };// 가입순서 - 나이 - 이름 
vector<JUDGE> v; 

bool compare(JUDGE a, JUDGE b){
	if(a.age != b.age) return a.age < b.age;
	else return a.priority <= b.priority;
}

int main(){
	int n;
	scanf("%d", &n);
	v.resize(n);
	for(int i=0; i<n; i++){
		scanf("%d %s",&v[i].age, &v[i].name);
		v[i].priority = i;
	}
	
	sort(v.begin(), v.end(), compare);
	for(int i=0; i<n; i++){
		printf("%d %s\n", v[i].age, v[i].name);
	}
	return 0;
}
