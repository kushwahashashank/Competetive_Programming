#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string ans="YES";
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if((v[k]-v[j])==(v[j]-v[i])){
                        ans="NO";
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}