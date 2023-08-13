#include<bits/stdc++.h>
 
 
using namespace std;


//#define int long long 
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define ALL(X) X.begin(), X.end()
#define rALL(X) X.rbegin(), X.rend()
typedef long long loli;
typedef long double ld;
typedef pair<int,int> pii;
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
#define maxn 200005
//int a[maxn];
//ifstream fin("test.in");
//ofstream fout("test.out");
int r,n;
vs seats;
int vy[] = {
    0, 1, 2,
    4, 5, 6,
    8, 9, 10,
};
int py[] = {
    4, 2, 0, 5, 1
};
int dist(int at){
    return min({abs(at- 0),abs(at - (r/2+1)),abs(at - (r+2))});
}
int get_row(){
    vector<pii> vrow{};
        for (auto x: { 1, r/2+2 }) {
            int cnt = 0;
            for (auto y: vy)
                if (seats[x][y] == '-')
                    cnt++;
            if (cnt)
                vrow.emplace_back(x, cnt);
        }
        if (vrow.empty())
            for (int x = 0; x < r+3; x++) {
                int cnt = 0;
                for (auto y: vy)
                    if (seats[x][y] == '-')
                        cnt++;
                if (cnt)
                    vrow.emplace_back(x, cnt);
            }

        int row = max_element(ALL(vrow), [&](pii x, pii y){
            if (x.second != y.second)
                return x.second < y.second;
            auto dx = dist(x.first), dy = dist(y.first);
            if (dx != dy)
                return dx > dy;
            return x.first > y.first;
        })->first;
        return row;
}
void _solve() {
   
    cin >> r >> n;
    seats.resize(r+3);
    for (int i =0;i<r+3;i++){
        cin >>seats[i];
    }

    for (int i = 0; i < n; i++) {
        char c = 'a' + i;
        int row = get_row();
        auto& srow = seats[row];

        int elc = 0, erc = 0;
        for (int x = 0; x < r+3; x++)
            for (auto y: vy)
                if (seats[x][y] == '-')
                    if (y != 5)
                        (y < 5 ? elc : erc)++;

        for (auto ly: py) {
            auto ry = 10 - ly;
            auto ely = srow[ly] == '-';
            auto ery = srow[ry] == '-';
            if (!ely and !ery) continue;
            if (ly != ry and ely and ery) {
                if (elc >= erc)
                    srow[ly] = c;
                else
                    srow[ry] = c;
            } else if (ely) {
                srow[ly] = c;
            } else if (ery) {
                srow[ry] = c;
            }
            break;
        }

    }

    for (int i =0;i<r+3;i++){
        cout << seats[i] << endl;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    // cin >>_;
    while(_--){
        _solve();   
    }

}