#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        string s;
        cin>>s;
        vector<char>v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-97]++;
        }
      
        int count=0;
        for(int i=0;i<26;i++){
            if(v[i]>=2){
                count++;
            }
            if(count>=2){
                break;
            }
        }
        if(count==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}