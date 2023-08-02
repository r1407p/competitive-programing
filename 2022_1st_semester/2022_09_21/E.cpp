#include<bits/stdc++.h>
#define eb emplace_back
#define pb push_back
#define X first
#define Y second
#define CLR(x, y) memset(x, y, sizeof(x))
#define ALL(X) X.begin(), X.end()
#define io_o() ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define For(i, n) for(int i = 0; i < n; i++)
#define For1(i, n, m) for(int i = n; i < m; i++)
#define For2(X) for(auto x : X)
#define maxn 200005
#define pi = acos(-1)
using namespace std;
typedef long long ll;
const ll mod = (1e9)+7;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
//sort(a, a+n, greater<int>());
int a[maxn];
bool flag = false;
class Node{
public:
    Node(string temp){
        this->Name = temp;
    }
    string Name;
    vector<Node*> is;
    vector<Node*> has;
};
bool finding(string name,bool dd){

}
unordered_map<string,Node*> mp;
unordered_map<Node*,bool> vis;
bool dfs(Node*st,Node*end){
    if(st==end)
        return true;
    vis[st]=true;
    for(auto nei:st->is){
        if(!vis[nei] && dfs(nei,end))
            return true;
    }
    return false;
}
unordered_map<Node*,bool> viss;
bool ddfs(Node*st,Node*end,bool fg){
    // cout<<"\nddfs:"<<st->Name<<fg<<endl;
    
    if(st==end)
        return fg;
    for(auto n_h:st->has)
        if(!viss[n_h] and ddfs(n_h,end,true))
            return true;
    for(auto nei:st->is)
        if(!viss[nei] && ddfs(nei,end,fg))
            return true;
    viss[st]=true;
    return false;
}
void _solve() {
    int n,m;
    cin >> n>>m;
    vector<vector<string>> temp(n,vector<string>(3,""));
    
    for(int i =0;i<n;i++){
        for(int j =0;j<3;j++){
            cin >>temp[i][j];
            if(j!=1){
                if(mp.find(temp[i][j])==mp.end()){
                    mp[temp[i][j]] = new Node(temp[i][j]);
                }
            }
        }
    }
    for(int i =0;i<n;i++){
        if(temp[i][1]=="is-a"){
            mp[temp[i][0]]->is.push_back(mp[temp[i][2]]);
        }else{
            mp[temp[i][0]]->has.push_back(mp[temp[i][2]]);
        }
    }
    cout<<boolalpha;
    for(int i=0;i<m;i++){
        vector<string> ans(3,"");
        for(int i =0;i<3;i++){
            cin >> ans[i];
        }
        if(ans[1]=="is-a"){
            vis.clear();
            cout<<"Query "<<i+1<<": "<<dfs(mp[ans[0]],mp[ans[2]])<<endl;
        }else{
            cout<<"Query "<<i+1<<": "<<ddfs(mp[ans[0]],mp[ans[2]],false)<<endl;
        }
    }


}

int main(){
    io_o(); //cute!
    int t = 1;
    // cin >> t;
    while(t--) {
        _solve();
    }
    return 0;
}
