#include<cstdio>
const int N=2010;
int n,k,i,d[N][N],h=1,t,q[N*N][2];
char a[N][N];
struct DSU{
  int f[N];
  void init(){
    for(int i=1;i<=n+1;i++)f[i]=i;
  }
  int F(int x){return f[x]==x?x:f[x]=F(f[x]);}
}down[N],right[N];
inline void ext(int x,int y,int w){
  if(a[x][y]=='#')return;
  if(d[x][y])return;
  d[x][y]=w;
  q[++t][0]=x;
  q[t][1]=y;
}
int main(){
  scanf("%d%d",&n,&k);
  for(i=1;i<=n;i++)scanf("%s",a[i]+1);
  for(i=1;i<=n;i++)down[i].init(),right[i].init();
  ext(1,1,1);
  while(h<=t){
    int x=q[h][0];
    int y=q[h++][1];
    int w=d[x][y]+1;
    //right
    for(i=right[x].F(y);i<=y+k&&i<=n;i=right[x].F(i)){
      ext(x,i,w);
      right[x].f[i]++;
    }
    //down
    for(i=down[y].F(x);i<=x+k&&i<=n;i=down[y].F(i)){
      ext(i,y,w);
      down[y].f[i]++;
    }
  }
  printf("%d",d[n][n]-1);
}