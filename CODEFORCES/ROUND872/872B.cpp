#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int u=0;u<t;u++){
      int n,m;
      cin>>n>>m;
      vector<int>v(n,0);
      vector<int>s(m+2,0);
      int ml=-1,mr=-1;
      int ans=0;
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      for(int i=0;i<n;i++){
        
        if(v[i]==-1){
            if(ml==-1){
                s[m]=1;
                ans++;
                ml=m;
                mr=m;
            }
            else{
                if(ml>1){
                    
                    ml--;
                    s[ml]=1;
                    ans++;
                }
            }
        }
        if(v[i]==-2){
            if(mr==-1){
                s[1]=1;
                ans++;
                ml=1;
                mr=1;
            }
            else{
                if(mr<m){
                    mr++;
                    s[mr]=1;
                    ans++;
                }
            }
        }
      
      else{
        if(s[v[i]]==0){
            ans++;
            s[v[i]]=1;
            ml=min(ml,v[i]);
            mr=max(mr,v[i]);
        }
      }
    }
      cout<<ans<<endl;

    }
    
    return 0;
}q