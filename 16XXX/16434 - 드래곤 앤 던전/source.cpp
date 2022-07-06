#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long ull;
int N, Hatk;

ll roomt[198765] = {0};
ll rooma[198765] = {0};
ll roomh[198765] = {0};

/*
 * Hmaxhp 파라메트릭. 
 * Hmaxhp 가 longlong범위인듯.
 * 방이 1e5개밖에 안되서 그냥 O(N)으로 탐색해도 될듯하다. 
 * Hmaxhp의 최대값은 용사공격력 1 적공격/체력둘다 1e6인 케이스
 * 이러면 1e6*1e6이니까 1e12? 가 최대인듯. 
 * 근데 이제 방수 123456개니까 실제로는 1e17을 살짝 넘는 숫자네요
 * 1e18 박으면 될거라 희망중. 
 */
 
ll search(ll s, ll e){ // mid -> Hmaxhp
	ll mid = (s+e)/2;
	if(s>e) return s;
	
	ll Hmaxhp = mid;
	ll Hcurhp = mid;
	ll Hcuratk = Hatk;
	
	bool survflag = true;
	for(ll i=1; i<=N; i++){
		if(roomt[i] == 1){
			ll tmp = roomh[i] % Hcuratk;
			
			if(tmp) Hcurhp -= (roomh[i] / Hcuratk) * rooma[i];
			else    Hcurhp -= (roomh[i] / Hcuratk -1) * rooma[i];
			
			/*ll enemyh = roomh[i];
			ll enemya = rooma[i];
			//printf("%llu %llu %llu %llu\n", Hcurhp, Hcuratk, enemyh, enemya);
			
			while(enemyh>0 && Hcurhp>0){
				enemyh -= Hcuratk;
				if(enemyh<=0ll) break;
				
				Hcurhp -= enemya;
				if(Hcurhp<=0ll){
					survflag = false;
					goto end;
				}
			}*/
		}
		
		if(roomt[i] == 2){
			Hcurhp = min(Hmaxhp, Hcurhp + roomh[i]);
			Hcuratk += rooma[i];
		}
		
		if(Hcurhp <= 0){ survflag = false; break; }
	}
	
	end:
	if(survflag) return search(s,mid-1);
	else         return search(mid+1,e);
}

int main(){
	cin >> N >> Hatk;
	for(int i=1; i<=N; i++){
		cin >> roomt[i] >> rooma[i] >> roomh[i];
	}
	cout << search(1,2e18);
	return 0;
}
