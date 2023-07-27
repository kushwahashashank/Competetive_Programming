#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int n;
      cin>>n;
      vector<int>v;
      int ans=0;
      int temp=0;
      for(int j=0;j<n;j++){
        int a;
        cin>>a;
        v.push_back(a);
        if(v[j]==0){
            temp++;
            ans=max(ans,temp);
        }
        else{
            temp=0;
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}