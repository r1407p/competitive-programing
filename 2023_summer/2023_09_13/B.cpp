#include <bits/stdc++.h>
using namespace std;
vector<int> prime;
int get_prime(){
    int n = 100000;
    vector<bool> is_prime(n+1,true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2;i*i<=n;i++){
        if(is_prime[i]){
            for(int j = i*2;j<=n;j+=i){
                is_prime[j] = false;
            }
        }
    }
    for(int i = 2;i<=n;i++){
        if(is_prime[i]){
            prime.push_back(i);
        }
    }
    return prime.size();
}
int get_GCD(int a,int b){
    return get_GCD(b,a%b);
}

void __solve(){
    int n ,p ,q;
    cin >>n >>p >>q;
    int t = get_GCD(p,q);
    p/=t;
    q/=t;
    vector<int> total;
    int sum =0;
    for(int i =0;i<n;i++){
        total.push_back(prime[i]);
        sum += prime[i];
    }
}
int main(){
    int t;
    cin >>t;
    get_prime();
    int sum = 0;
    for(int i =0;i<2000;i++){
        sum += prime[i];
    }
    cout <<sum<<endl;
    while(t--){
        __solve();
    }
}