#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
const int maxn = 1e6+5;
// #define data array<int,3>;
typedef  array<int,3> Data;
typedef array<int,3> vd;
struct node{
    int left;
    int right;
    Data  value;
};
vector<node>segment_tree(4*maxn);
vi a;
vi b;
Data merge(Data l,Data r){
    return Data{max(l[0],r[0]),max(l[1],r[1]),max({l[2],r[2],l[0]*r[1]})};
}
void build(int left,int right,int index){
    // cout <<left<<" "<<right<<" "<<index<<endl;;
    segment_tree[index].left = left;
    segment_tree[index].right = right;
    if(left==right){
        // cout <<left<<" "<<right<<" "<<index<<endl;;
        segment_tree[index].value = {a[left],b[left],0};
        // cout << left<<" "<<right <<" "<<index<<" "<<segment_tree[index].value[0] <<" "<<segment_tree[index].value[1]<<" "<<segment_tree[index].value[2]<<endl;
        return;
    }
    int mid = (left+right)/2;
    build(left,mid,index<<1);
    build(mid+1,right,index<<1|1);
    segment_tree[index].value = merge(segment_tree[index<<1].value,segment_tree[index<<1|1].value);
    // cout << left<<" "<<right <<" "<<index<<" "<<segment_tree[index].value[0] <<" "<<segment_tree[index].value[1]<<" "<<segment_tree[index].value[2]<<endl;
}
void modify(int position,int index,Data value){
    if(segment_tree[index].left == position && segment_tree[index].right ==position){ // here is leaf
        segment_tree[index].value = value;
        // cout <<index<<" "<<segment_tree[index].left<<" "<<segment_tree[index].right <<" "<<segment_tree[index].value[0] <<" "<<segment_tree[index].value[1]<<" "<<segment_tree[index].value[2]<<endl;

        return;
    }
    int mid = (segment_tree[index].left+segment_tree[index].right)/2;
    
    if(position<=mid){
        modify(position,index<<1,value);
    }else{
        modify(position,index<<1|1,value);
    }
    segment_tree[index].value = merge(segment_tree[index<<1].value,segment_tree[index<<1|1].value);
    // cout <<index<<" "<<segment_tree[index].left<<" "<<segment_tree[index].right <<" "<<segment_tree[index].value[0] <<" "<<segment_tree[index].value[1]<<" "<<segment_tree[index].value[2]<<endl;
}
Data query(int i,int j ,int index){
    int res = 0;
    int left = segment_tree[index].left;
    int right = segment_tree[index].right;
    // cout << left<<" "<<right <<" "<<segment_tree[index].value[2]<<endl;;
    int mid = (left+right)/2;
    if(segment_tree[index].left==i && segment_tree[index].right ==j){
        return segment_tree[index].value;
    }
    if(i>mid)return query(i,j,index*2+1);
    if(mid>=j)return query(i,j,index*2);
    return merge(query(i,mid,index*2),query(mid+1,j,index*2+1));
}
void __solve(){
    int n, m;
    cin >> n>>m;
    a.resize(n);
    b.resize(n);
    for(int i =0;i<n;i++){
        cin >>a[i]; 
    }
    for(int i =0;i<n;i++){
        cin >>b[i]; 
    }
    segment_tree.resize(4*n);
    build(0,n-1,1);
    for(int i =0;i<m;i++){
        int q,l,r;
        cin >> q>>l>>r;
        if(q==1){
            a[l-1]+=r;
            modify(l-1,1,Data{a[l-1],b[l-1],0});
        }else if(q==2){
            b[l-1]+=r;
            modify(l-1,1,Data{a[l-1],b[l-1],0});
        }else{
            cout << query(l-1,r-1,1)[2]<<endl;;
        }
    }
}


signed main(){
    __solve();
}