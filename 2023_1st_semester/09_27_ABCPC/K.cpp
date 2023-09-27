#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <set>
#include <cmath>
using namespace std;
#define ll long long
#define eb emplace_back
#define iter(x) begin(x), end(x)

#ifdef OAO
#define print(args...) orz("[" + string(#args) + "] =", args)
void orz(){cerr<<endl;}
void printv(auto L, auto R){while(L < R) cerr<<*L<<" \n"[(next(L)) == R], ++L;}
template<class T1, class...T2> void orz(T1 x, T2...t){cerr<<x<<" ", orz(t...);}
#else
#define print(...) 0
#define printv(...) 0
#endif

const int maxn = 100005;

ll w[maxn], a[maxn];

int n;
pair<int,int> next(int now){
    int i = now+3;
    int j = now-3;
    if(i>n){
        i-=n;
    }
    if(j>n){
        j-=n;
    }
    if(i<1){
        i+=n;
    }
    if(j<1){
        j+=n;
    }
    return {i,j};
}

void solve() {
    cin >> n;
    vector<bool> used(n+5);
    vector<int> res;
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(1);
    used[1] = true;
    while(pq.size()){
        int temp = pq.top();
        pq.pop();
        res.push_back(temp);
        if(res.size()==n-1){
            break;
        }
        auto [i,j] = next(temp);
        if(!used[i]){
            pq.push(i);
            used[i] = true;
        }
        if(!used[j]){
            pq.push(j);
            used[j] = true;
        }
    }
    if(res.size()!=n-1){
        cout <<"NO\n";
    }else{
        cout << "YES\n";
        for(auto &x :res){
            cout << x << " ";
        }cout << '\n';
    }
    
}

signed main() {
	ios_base::sync_with_stdio(false), cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		solve();
	}
	return 0;
}