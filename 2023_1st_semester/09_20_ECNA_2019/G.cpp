#include<bits/stdc++.h>


using namespace std;
#define rALL(x) x.rbegin(),x.rend()
#define int long long 
#define PII pair<int,int>
#define VI vector<int>
int mod(int a,int b){
    a%=b;
    if(a<0){
        a+=b;
    }
    return a;
}
int extgcd(int a,int b,int &x,int &y){ 
    if(b==0){
        x = 1;
        y = 0;
        return a;   
    }
    int r = extgcd(b,a%b,x,y);
    int temp=y;     
    y = x - (a / b) * y;
    x = temp;
    return r;      
}

PII chinese_remainder_theorem(int x, int a, int y, int b) {
  int s, t;
  int d = extgcd(x, y, s, t);
  if (a%d != b%d) return make_pair(0, -1);
  return make_pair(mod((s*b*x+t*a*y),x*y)/d, x*y/d);
}

PII chinese_remainder_theorem(const vector<int> &x, const vector<int> &a) {
  PII ret = make_pair(a[0], x[0]);
  for (int i = 1; i < x.size(); i++) {
    ret = chinese_remainder_theorem(ret.second, ret.first, x[i], a[i]);
    if (ret.second == -1) break;
  }
  return ret;
}

signed main(){
    int a,b;
    int c,d,e;
    int f,g;
    cin >> a >> b>>c>>d>>e>>f>>g;
    vector<int> boxes;
    for(int i =1;2*i<a;i++){
        boxes.push_back((a-2*i)*(b-2*i)*i);
        // cout <<boxes[i-1]<<endl;
    }
    sort(rALL(boxes));
    vector<int> x = {boxes[0],boxes[1],boxes[2]};
    vector<int> t = {c,d,e};
    auto [mn, lcm] = chinese_remainder_theorem(x,t);
    // cout << mn <<" " <<lcm<<endl;
    int times = (f-mn)/lcm;
    int res = mn + times*lcm;
    res -= lcm*3;
    while(1){
        if(res>=f && res<=g)
            break;
        res +=lcm;
    }
    cout <<res <<endl;






}