#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        int v[n];
        string s;
        cin>>s;
        int ans=0;
        int m[26]={0};
        for(int i=0;i<n;i++){
            m[s[i]-97]++;
        }
        bool check=true;
        int b=0;
        for(int i=0;i<26;i++){
            if(m[i] % 2==1){
                b++;
                if(b>1){
                    check=false;
                    break;
                }
            }
        }
        if(check){
        for(int i=0;i<26;i++){
            if(m[i]>1 && m[i] % 2==0){
                ans=1;
                break;
            }
            else if(m[i]>1 && m[i]%2==1){
                ans=2;
            }
        }    
        }
        cout<<ans<<endl;
    }
    return 0;
}