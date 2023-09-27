#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define pb push_back
#define ALL(i) i.begin(),i.end()
const int N=1000005;
using namespace std;
using pii=pair<int,int>;

int n;
int a[N];
vector<int> vc[N];
void sol(){
	cin >>n;
	int ans=0,cnt=0;	
	for (int i=1;i<=n;i++){
		cin >>a[i];
		vc[i].clear();
		ans|=a[i];
		for (int j=0;j<31;j++){
			if (a[i]&(1LL<<j)){
				vc[i].pb(j);
				
			}
		}
	}
	//cout <<ans<<'\n';	
    1001
    3 0
    
	for (int i=0;i<31;i++){
		if ((ans&(1LL<<i))==0){
			//cout <<i<<' ';
			int l=-1;
			for (int v=1;v<=n;v++){
				auto it=upper_bound(ALL(vc[v]),i);
				if (it!=vc[v].end()) l=max(l,*it);
			}
			if (l!=-1){
				cnt++;
				ans|=((1LL<<(l+1))-1);
			}
		}
	}
	cout <<ans<<' '<<cnt<<'\n';
	
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int _=1;
	cin >>_;
	while (_--) sol();
	return 0;
}