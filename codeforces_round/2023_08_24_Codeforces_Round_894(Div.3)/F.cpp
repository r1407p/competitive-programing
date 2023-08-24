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
    int n, m, k;
    cin >> n >> m >> k;
    vi nums(k);
    int sum = 0;
    if (m > n)
        swap(n, m);
    // cout << n << " " << m << endl;
    // n>=m
    for (auto &t : nums)
    {
        cin >> t;
        sum += t;
    }
    vb can(sum + 1);
    can[0] = true;
    for (int i = 0; i < k; i++)
    {
        for (int j = sum - nums[i]; j >= 0; j--)
        {
            if (can[j] == true)
                can[j + nums[i]] = true;
        }
    }
    int res = INT_MAX;
    for (int i = 1; i <= sum; i++)
    {
        if (can[i])
        {
            int a = i, b = sum - i;
            if (a < b)
                swap(a, b);
            // a>=b
            // cout << a << " " << n << " " << b << " " << m << endl;
            // cout << a / n << " " << b / m << endl;
            res = min(res, (int)max(ceil((double)a / n), ceil((double)b / m)));
        }
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