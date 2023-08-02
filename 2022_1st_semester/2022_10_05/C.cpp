#include<bits/stdc++.h>
 
 
using namespace std;


//#define int long long 
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define ALL(X) X.begin(), X.end()

typedef long long loli;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<loli,loli> pll;
typedef pair<pll,pll> pllll;
typedef string str;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<loli> vl;
typedef vector<vl> vvl;
typedef vector<vvl> vvvl;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;
typedef vector<ld> vld;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<str> vs;
vl summ;
vl arr;
void build(int l ,int r,int v =0){
    if(r-l==1){
        summ[v] = arr[l];
        return ;
    }
    int mid = (l+r)/2;
    build(l,mid,2*v+1);
    build(mid,r,2*v+2);
    summ[v]=  __gcd(summ[2*v+1],summ[2*v+2]);
}
loli query(int L,int R,int l,int r,int v =0){
    if(l==L&&R==r){
        return summ[v];
    }
    int mid = (l+r)/2;
    if(R<=mid)
        return query(L,R,l,mid,2*v+1);
    else if (mid<=L)
        return query(L,R,l,mid,2*v+1);
    else  
        return __gcd(query(L,mid,l,mid,2*v+1),query(mid,R,mid,r,2*v+1));
}
void _solve(){
    
    int n;
    int ll,rr,l,r;
    cin>>n>>ll>>rr>>l>>r;
    l-=ll,r-=rr;
    int bx=(l<0?-1:1);
    int by=(r<0?-1:1);
    vpll pts(n);
    for(auto&[x,y]:pts){
        cin>>x>>y,x-=ll,y-=rr;
        x*=bx,y*=by;
    }
    l*=bx,r*=by;

    sort(pts.begin(),pts.end());
    
    cout<<"pts:\n";
    for(auto [x,y]:pts)
        cout<<x<<' '<<y<<endl<<flush;
    
    map<loli,int> cnt;
    cnt[r]++;
    for(auto [x,y]:pts)
        cnt[y]++;
    
    int idx=0;
    unordered_map<loli,int> trans;
    for(auto [x,y]:cnt){
        trans[x]=++idx;
    }

    cout<<l<<' '<<r<<endl;

    int cur=-1;
    vvl grp;
    for(int i=0;i<n;++i){
        if(pts[i].first>l or pts[i].second>r)
            continue;
        if(pts[i].first!=cur){
            grp.push_back(vl());
            grp.back().push_back(trans[pts[i].second]);
            cur=pts[i].first;
        }else{
            grp.back().push_back(trans[pts[i].second]);
        }
        cout<<flush;
    }
    
    cout<<"---------\n";
    for(auto r:grp){
        for(auto x:r)
            cout<<x<<' ';
        cout<<endl;
    }
    cout<<"trans\n";
    for(auto [x,y]:trans)
        cout<<x<<' '<<y<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}