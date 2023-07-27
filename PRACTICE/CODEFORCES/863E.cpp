#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int TESTCASES;
    cin>>TESTCASES;
    while(TESTCASES--){
        ll int n;
        cin>>n;
        int a[9];
        for(int i=0;i<9;i++){
            if(i<4){
                a[i]=i;
            }
            else {
                a[i]=i+1;
            }
        }
        stack<ll int>s;
        while(n>0){
            s.push(n%9);
            n/=9;
        }
        ll int ans=0;
        while(s.size()>0){
            ans*=10;
            ans+=a[s.top()];
            s.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}