#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b){
return gcd(a - b, b);
    }
        

    return gcd(a, b - a);
}
int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
       int n;
       cin>>n;

       int a[n],b[n],v[n];

       for(int i=0;i<n;i++){
        cin>>a[i];
       }
        for(int i=0;i<n;i++){
        cin>>b[i];
       }
       sort(a, a + n);
        sort(b, b + n);
      bool g = false;
       int count =0;
       int j=n-1;
       int k=n-1;
       while(k>=0){
        int x=b[k];
        while(j>=0 && a[j]>x){
            count++;
            j--;
        }
        v[k]=count;
        
        if(count<=0){
            g=true;
            break;
        }
        count--;

        k--;

       }
       if(g){
        cout<<0;
       }
       else{

       
       long long m = 1e9+7;
       long long int ans=v[0];
       for(int i=1;i<n;i++){
            ans=(ans%m * v[i]%m)%m;
       }
       cout<<ans;
       }
       cout<<endl;
       
    }
    return 0;
}