#include <bits/stdc++.h>
using namespace std;
bool Sol(long long int m,long long int n,long long int s){
    if(s==n || m==n){
        return true;
    }
    if(m%2==1 || s>n || (m+s <n)){
        return false;
    }
    return Sol(m/2,n,s+m/2) || Sol(m/2,n,s);
}
int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        long long int m,n;
        cin>>m>>n;
        string ans="NO";
        if(Sol(m,n,0)){
            ans="YES";
        }
        cout<<ans<<endl;
    }
    return 0;
}