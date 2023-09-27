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

signed main() {
	ios_base::sync_with_stdio(false), cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		if (x > 0)
			cout << 10 << '\n';
		else
			cout << 0 << '\n';
	}		
	return 0;
}