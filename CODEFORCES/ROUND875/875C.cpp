#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void dfs(int u ,vector<int>&dp,vector<int>&id,vector<vector<pair<int,int> > >&v){
    for(int i=0;i<v[u].size();i++){
        if(dp[v[u][i].first] == 0){
            dp[v[u][i].first] = dp[u] + (v[u][i].second <= id[u]);
            id[v[u][i].first] = v[u][i].second;
            dfs(v[u][i].first,dp,id,v);
        }
    }
}
int main(){
    int TESTCASES;
    cin>>TESTCASES;
    while(TESTCASES--){
        int n;
        cin>>n;
        vector<pair<int,int> > p;
        vector<vector<pair<int,int> > > v(n+1,p);
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            v[a].push_back(make_pair(b,i+1));
            v[b].push_back(make_pair(a,i+1));
        }
        vector<int>dp(n+1,0),id(n+1,0);
        int ans=0;
        dp[1]=1;
        dfs(1,dp,id,v);
        for(int i=0;i<n+1;i++)ans=max(ans,dp[i]);
        cout<<ans<<endl;
    }
    return 0;
}