#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>
 
#define endl '\n'
#define all(v) begin(v),end(v)
#define mp(x,y) make_pair(x,y)
#define mpp(w,x,y,z) mp(mp(w,x),mp(y,z))
#define ub upper_bound
#define lb lower_bound
#define fst first
#define scd second
 
#ifndef lolainta
#define DBN(...)
#define DBN1D(...)
#define DBN2D(...)
#define dbn(...)
#endif
 
using namespace std;
 
typedef long long loli;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<pii,pii> piiii;
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
 
const loli md=1e6+7;
// const int inf=0x3fffffff;
const loli inf=1ull<<60;
 
inline loli mod(const loli&x){
    return (x%md+md)%md;
}
inline loli mod(const loli&x,const loli&m){
    return (x%m+m)%m;
}
 
void pre(){
 
}
 
ifstream fin("join.in");
ofstream fout("join.out");
 
vs filter(str line){
    vs ret;
    assert(line[0]=='@');
    int p=0;
    while(p<line.size()){
        if(line[p++]=='@'){
            str pb;
            int q=p;
            while(line[++q]!=' ');
            pb=line.substr(p,q-p-(bool)(p==1));
            ret.push_back(pb);
            p=q;
        }
    }
    return ret;
}
 
void output(vector<map<int,pii>>&dp,int cnt,int st){
    dbn(cnt,st)
    if(cnt==-1)
        return;
    output(dp,cnt-1,dp[st][cnt].fst);
    fout<<dp[st][cnt].scd+1<<' ';
}
 
void solve(){
    string in;
    int n;
    fin>>n;
    fin.ignore();
    vector<vs> room;
    while(n--){
        getline(fin,in);
        room.push_back(filter(in));
    }
 
    unordered_map<string,int> mp; 
    vs people;
    int cnt=0;
    for(const vs&msg:room)
        if(!mp.count(msg[0]))
            mp[msg[0]]=cnt++,people.push_back(msg[0]);
    DBN(people)
    
    vector<map<int,pii>> dp(people.size(),map<int,pii>());
    for(int i=0;i<people.size();++i)
        dp[i][0]=pii(-1,i);
    DBN2D(room)
 
    for(int line=0;line<room.size();line++){
        vs msg=room[line];
        int id=mp[msg[0]];
        piiii maxx(pii(0,prev(dp[id].end())->fst),prev(dp[id].end())->scd);
        for(int i=1;i<msg.size();++i){
            int mid=mp[msg[i]];
            int msz=prev(dp[mid].end())->fst;
            if(id==mid)
                continue;
            if(msz+1>maxx.fst.scd)
                maxx=piiii(mp(0,msz+1),pii(mid,line));
        }
        dbn(id,maxx)
        if(maxx.fst.scd>prev(dp[id].end())->fst)
             dp[id][maxx.fst.scd]=maxx.scd;
    }
    DBN2D(dp)
 
    piiii maxx(pii(0,-1),pii(-1,-1));
    for(int i=0;i<people.size();++i)for(auto r:dp[i]){
        maxx=max(maxx,piiii(mp(r.fst,i),r.scd));
    }
    dbn(maxx)
 
    fout<<maxx.fst.fst+1<<endl;
    
    output(dp,maxx.fst.fst,maxx.fst.scd);
 
    
}
 
int main(){
    cout<<fixed<<setprecision(8);
    ios_base::sync_with_stdio(false);cin.tie(0);
#ifdef lolainta
    cerr<<"========== Start Executing ==========\n";
#endif
    pre();
    int _=1;
//    cin>>_;
    vl __(_);
    iota(all(__),1);
    for(auto i:__){
		i=i;
#ifdef lolainta
        // cout<<"Case "<<i<<": ";
        cerr<<"========== Case "<<i<<" ==========\n";
#endif
        solve();
#ifdef lolainta
        break;
#endif
    }
#ifdef lolainta
    cerr<<"=====================================\n";
#endif
    return 0;
}