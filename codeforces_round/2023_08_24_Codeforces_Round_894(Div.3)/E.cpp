#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define ALL(X) X.begin(), X.end()
#define rALL(X) X.rbegin(), X.rend()
typedef long long loli;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<loli, loli> pll;
typedef pair<pll, pll> pllll;
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
#define maxn 200005
// int a[maxn];
// ifstream fin("test.in");
// ofstream fout("test.out");
void _solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    vi nums(n);
    for (auto &t : nums)
    {
        cin >> t;
    }
    int res = 0;
    int sum = 0;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= 0)
        {
            continue;
        }

        sum += nums[i];
        // cout << nums[i] << " " << sum << " ";
        pq.push(-nums[i]);
        if (pq.size() > m)
        {
            sum += pq.top();
            pq.pop();
        }
        // cout << sum << " " << d * (i + 1) << endl;
        res = max(res, sum - d * (i + 1));
    }
    cout << res << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
    {
        _solve();
    }
}