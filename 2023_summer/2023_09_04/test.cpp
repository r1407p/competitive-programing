#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
typedef pair<int,double>P;
const int N=8200;
int n,m,i,j,a[N],start;
vector<P>f[N];
inline double win(int x,int y){
    return 1.0*a[x]/(a[x]+a[y]);
}
inline void cal(int x){
    int l=x<<1,r=x<<1|1;
    for(int _=0;_<2;_++){
        for(vector<P>::iterator i=f[l].begin();i!=f[l].end();i++){
            int A=i->first;
            double B=0;
            for(vector<P>::iterator j=f[r].begin();j!=f[r].end();j++){
                B+=win(A,j->first)*j->second;
            }
            f[x].push_back(P(A,B*i->second));
        }
        swap(l,r);
    }
}
int id[N],cnt;
void dfs(int x){
    if((x<<1)>m){
        id[++cnt]=x;
        
    }
    if((x<<1)<=m)dfs(x<<1);
    if((x<<1|1)<=m)dfs(x<<1|1);
}
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    a[0]=a[1];
    a[1]=0;
    sort(a+1,a+n+1);
    a[1]=a[0];
    m=n*2-1;
    start=m-n+1;
    dfs(1);
    for(i=1;i<=n;i++){
        int x=id[n-i+1];
        f[x].push_back(P(i,1));
        // printf("%d %d\n",x,i);
    }
    for(i=start-1;i;i--){
        cal(i);
    }
    for(i=0;i<f[1].size();i++)if(f[1][i].first==1){
        printf("%.10f",f[1][i].second);
    }
}