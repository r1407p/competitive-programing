#include <bits/stdc++.h>

using namespace std;

#define int long long
typedef bitset<30> Num;
vector<int> Temp(31);

void solve() {
    int n, k;
    cin >> n >> k;
    int T = (1ll << k) - 1;
    vector<pair<int,int>> a;
    for( int i = 1 , x ; i <= n ; i ++ )
        cin >> x , a.emplace_back( x , i );
    sort( a.begin(), a.end() );
    int l , r , res = INT_MAX , val;
    for( int i = 1 ; i < n ; i ++ ){
        if( res > (a[i].first^a[i-1].first)){
            res = a[i].first ^ a[i-1].first;
            l = a[i].second , r = a[i-1].second;
            val = T ^ ( a[i].first | a[i-1].first );
        }
    }
    cout << l << " " << r << " " << val << "\n";
    return;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

