#include <bits/stdc++.h>
using namespace std;

int arr[3][3] = {0};
int cnt[10] = {0};

vector<int> dx[9];
vector<int> dy[9];

vector<int> ans;

int calc(){
	int copy[3][3] = {0};
	for(int i=0; i<3; i++) for(int j=0; j<3; j++) copy[i][j] = arr[i][j];
	
	for(int i=0; i<9; i++){
		for(int j=0; j<dx[i].size(); j++){
			copy[dx[i][j]][dy[i][j]] += cnt[i];
			copy[dx[i][j]][dy[i][j]] %= 4;
		}
	}
	
	int ans = 0;
	for(int i=0; i<3; i++) for(int j=0; j<3; j++) ans += copy[i][j];
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	dx[0] = {0,0,1,1};
	dy[0] = {0,1,0,1};
	
	dx[1] = {0,0,0};
	dy[1] = {0,1,2};
	
	dx[2] = {0,0,1,1};
	dy[2] = {1,2,1,2};
	
	dx[3] = {0,1,2};
	dy[3] = {0,0,0};
	
	dx[4] = {0,1,1,1,2};
	dy[4] = {1,0,1,2,1};
	
	dx[5] = {0,1,2};
	dy[5] = {2,2,2};
	
	dx[6] = {1,1,2,2};
	dy[6] = {0,1,0,1};
	
	dx[7] = {2,2,2};
	dy[7] = {0,1,2};
	
	dx[8] = {1,1,2,2};
	dy[8] = {1,2,1,2};
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i=0; i<262144; i++){
		int ptr = 0;
		int tmp = i;
		while(tmp){
			cnt[ptr++] = tmp%4;
			tmp/=4;
		}
		
		if(calc() == 0){
			int tmp = 0;
			for(int i=0; i<9; i++) tmp += cnt[i];
			
			if(ans.size() == 0 || ans.size() > tmp){
				ans.clear();
				for(int i=0; i<9; i++){
					for(int j=0; j<cnt[i]; j++){
						ans.push_back(i+1);
					}
				}
			}
		}
	}
	
	for(auto it : ans){
		cout << it << " ";
	}
	return 0;
}
