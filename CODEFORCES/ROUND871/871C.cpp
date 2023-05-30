#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int n;
      cin>>n;
      int ans=INT_MAX;
      int d=INT_MAX,f=INT_MAX;
      for(int j=0;j<n;j++){
        int a;
        string r;
        cin>>a>>r;

        if(r[0]=='1'&&r[1]=='0'){
      
           d=min(d,a);
        }
        else if(r[0]=='0'&& r[1]=='1'){
    
            f=min(f,a);
        }
        else if(r[0]=='1'&&r[1]=='1'){
            ans=min(ans,a);
        }
        
      }
 
      if(d!=INT_MAX && f!=INT_MAX){
         ans=min(ans,d+f);
      }
      

if(ans==INT_MAX){
    cout<<-1<<endl;
}
else{
    cout<<ans<<endl;
}
     
    }
    return 0;
}