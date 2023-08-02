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
void _solve() {
    int n;
    cin >> n;
    For(i, n) cin >> a[i];
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
