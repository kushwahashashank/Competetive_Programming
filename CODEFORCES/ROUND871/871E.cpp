#include<bits/stdc++.h>
using namespace std;
bool Sol(vector<vector<int>>&v,int j,int k){
    if(j<0 || j>=v.size() || k<0 || k>=v[0].size() || v[j][k]==0){
        return 0;
    }
    int ans = v[j][k];
    v[j][k]=0;
    ans+=Sol(v,j+1,k);
    ans+=Sol(v,j-1,k);
    ans+=Sol(v,j,k+1);
    ans+=Sol(v,j,k-1);
    return ans;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int n,m;
      cin>>n>>m;
    int ans=0;
    vector<vector<int>>v(n,vector<int>(m,0));
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            cin>>v[j][k];
        }
    }
        for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
               ans=max(ans,Sol(v,j,k));
        }
    }
        cout<<ans<<endl;

    }
    return 0;
}