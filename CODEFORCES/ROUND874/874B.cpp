#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
       int n,k;
       cin>>n>>k;
       int a[n],c[n];
       int b[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
        c[i]=a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];
       }
       vector<int>ans(n,0);
    map<int,stack<int> > m;
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            m[a[i]].push(b[i]);
        }
        for(int i=0;i<n;i++){
            ans[i]=m[c[i]].top();
            m[c[i]].pop();
        }
       for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}