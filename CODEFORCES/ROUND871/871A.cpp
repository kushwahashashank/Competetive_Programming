#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      string s;
      cin>>s;
      string a="codeforces";
      int ans=0;
      for(int i=0;i<s.length();i++){
            if(s[i]!=a[i]){
                ans++;
            }
      }
cout<<ans<<endl;
    }
    return 0;
}