#include <bits/stdc++.h>
using namespace std;
long long int ans=0;
long long int m = 1e9+7;
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    // if(n==0 || r==0){
    //     return 0;
    // }
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n

void Sol(vector<int>&v,int i,int &n,int x){
    if(i>=n){
        return;
    }
    if(x==v[i]){
        ans=((ans%m + nCr(i,x-1)%m)%m + (long long int)(pow(2,n-i-1)-1)%m )%m;
        cout<<ans<<endl;
    }
    Sol(v,i+1,n,x);
    Sol(v,i+1,n,x+1);
    return;
}
int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        vector<int>v;
        v.reserve(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        Sol(v,0,n,1);
        cout<<ans<<endl;
    }
    return 0;
}