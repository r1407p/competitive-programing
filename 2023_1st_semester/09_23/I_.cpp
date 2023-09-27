#include <bits/stdc++.h>
// #define int long long
#define fi first
#define se second
#define pb push_back
#define ALL(i) i.begin(),i.end()
const int N=1000005;
using namespace std;
using pii=pair<int,int>;

struct seg{
	int n;
	vector<int> node;
	void init(int _n){
		n=_n;
		node.resize(4*n);	
	}
	void modify(int i,int v,int pos,int l,int r){
		if (r-l==1) {
			node[pos]=v;
			return;
		}
		int m=(l+r)/2;
		if (i<m) modify(i,v,2*pos+1,l,m);
		else modify(i,v,2*pos+2,m,r);			
	} 
	void modify(int i,int v){modify(i,v,0,0,n);}

	int query(int pos,int l,int r,int lq,int rq){
		if (l>=rq||r<=lq) return -2147483646;
		if (lq<=l&&r<=rq) return node[pos];
		int m=(l+r)/2;
		return max(query(2*pos+1,l,m,lq,rq),query(2*pos+2,m,r,lq,rq)); 
	}
	int query(int lq,int rq){return query(0,0,n,lq,rq+1);}
};
int n;
pii a[N];
void sol(){
	cin >>n;
	for (int i=0;i<n;i++) cin >>a[i].fi,a[i].se=i;
	sort(a,a+n);
	for (int i=0;i<n;i++) a[i].fi-=a[i].se;
	vector<int> lis;
	for (int i=n-1;i>=0;i--){
		if (lis.empty()||a[i].fi>=lis.back()) lis.pb(a[i].fi);
		else *upper_bound(ALL(lis),a[i].fi)=a[i].fi;
	}
	cout <<lis.size()<<'\n';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _=1;
    // cin >>_;
	while (_--) sol();
	return 0;
}