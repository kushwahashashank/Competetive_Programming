#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        vector<int>v,temp,temp1;
        v.reserve(n);
        temp.reserve(n-1);
        temp1.reserve(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int a=0;
        for(int i=0;i<n-1;++i){
            temp[i]=v[i]-v[i+1]+a;
            a=temp[i];
        }
        a=0;
        for(int i=n-1;i>0;--i){
            temp1[i]=v[i]-v[i-1]+a;
            a=temp1[i];
        }
        long long int ans=(n*(n-1))/2;
        long long int g=ans;
        for(int i=0;i<n-1;++i){
            if(temp[i]+temp1[i+1]==0){
                ans--;
            }
        }
        if(ans<g){
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


