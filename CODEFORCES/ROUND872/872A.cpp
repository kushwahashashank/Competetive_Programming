#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      string s;
      cin>>s;
      int n = s.length();
      int ans=0;
      if(!ispalindrome(s)){
        ans=n;
      }
      else{
        set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        if(st.size()==1){
            ans=-1;
        }
        else{
            ans=n-1;
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}