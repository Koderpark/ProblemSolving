#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct person{
	string name;
	int korean;
	int english;
	int math;
};

vector<person> v;

bool compare(person a, person b){
	if(a.korean  != b.korean)  return a.korean  > b.korean;
	if(a.english != b.english) return a.english < b.english;
	if(a.math    != b.math)    return a.math    > b.math;
	return a.name < b.name;
}

int main(){
	int n;
	person input;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> input.name >> input.korean >> input.english >> input.math;
		v.push_back(input);
	}
	sort(v.begin(), v.end(), compare);
	for(int i=0; i<v.size(); i++){
		cout << v[i].name << "\n";
	}
	return 0;
}
