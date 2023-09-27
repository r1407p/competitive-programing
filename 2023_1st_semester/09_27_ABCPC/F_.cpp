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
ll pw[maxn];
ll getw(int l, int r) {
	if (l == 0) return pw[r];
	return pw[r] - pw[l - 1];
}
int lb[maxn];

ll jizz[maxn];

void solve() {
	ll n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		ll cnt = 0;
		for (int j = 0; j < s.size() / 2; ++j) {
			if (s[j] != s[s.size() - j - 1]) ++cnt;
		}
		w[i] = cnt;
		pw[i] = (i ? pw[i-1] : 0) + w[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (w[i] > k) {
			lb[i] = -1;
			continue;
		}
		int l = -1, r = i;
		while (r - l > 1) {
			int mid = (l + r) / 2;
			if (getw(mid, i) > k)
				l = mid;
			else
				r = mid;
		}
		lb[i] = r;
	}
	ll ans = 0, sum = 0;
	int lef = 0;
	for (int i = 0; i < n; ++i) {
		if (lb[i] == -1) {
			sum = 0;
			lef = i + 1;
			continue;
		}
		if (lb[i] <= lef) {
			if (sum <= 0) {
				sum = a[i];
				lef = i;
			} else {
				sum += a[i];
			}
		} else {
			jizz[i] = 0;
			int mx = i;
			for (int j = i - 1; j >= lb[i]; --j) {
				jizz[j] = jizz[j + 1] + a[j];
				if (jizz[j] > jizz[mx]) mx = j;
			}
			if (jizz[mx] <= 0) {
				sum = a[i];
				lef = i;
			} else {
				sum = jizz[mx] + a[i];
				lef = mx;
			}
		}
		ans = max(ans, sum);
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