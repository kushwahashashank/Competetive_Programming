#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        vector<string>v;
        for(int i=0;i<n-1;i++){
            string p = s.substr(i,2);
            bool t=true;
            for(int j=0;j<v.size();j++){
                if(v[j]==p){
                    t=false;
                }
            }
            if(t){
                ans++;
                v.push_back(p);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}