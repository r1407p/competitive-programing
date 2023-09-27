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
#define data array<int,3>

const int maxn = 100005;

ll w[maxn], a[maxn];
struct Test{
    deque<data> vc;
    // int max;
    multiset<int> ms;
    Test(){
        ms.insert(0);
    }
    ll append(int at,int val){
        if(vc.size()==0){
            if(val>0){
                vc.push_back({at,at,val});
                ms.insert(val);
            }
        }else{
            int t = vc.size()-1;
            if(vc[t][1]==at-1){
                if(vc[t][2]+val>0){
                ms.erase(ms.find(vc[t][2]));
                vc[t][2]+=val;
                vc[t][1] = at;
                ms.insert(vc[t][2]);
                }
            }else{
                vc.push_back({at,at,val});
                ms.insert(val);
            }
        }   
        return *prev(ms.end());
    }
    ll remove(int at,int val){
        if(vc.size()==0){
            return 0;
        }else{
            if(vc[0][0]==at){
                if(vc[0][1]==at){// 
                    ms.erase(ms.find(vc[0][2]));
                    vc.pop_front();   
                }
                else if(vc[0][2]){
                    vc[0][0] = at+1;
                    ms.erase(ms.find(vc[0][2]));
                    vc[0][2]-=val;
                    ms.insert(vc[0][2]);
                }
            }
        }
        return *prev(ms.end());
    }
};
void solve() {
	ll n, k;
	cin >> n >> k;
    Test test;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		ll cnt = 0;
		for (int j = 0; j < s.size() / 2; ++j) {
			if (s[j] != s[s.size() - j - 1]) ++cnt;
		}
		w[i] = cnt;
	}

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll ans = 0;
	ll cost = 0, sum = 0;
	int lef = -1;
	for (int i = 0; i < n; ++i) {//i 右移
		cost += w[i];
		while (lef < i && cost > k) {//lef 右移

			++lef;
			cost -= w[lef];
			ans = max(ans,test.remove(lef,a[lef]));

		}
        ans = max(ans,test.append(i,a[i]));
	}
	cout << ans << '\n';
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