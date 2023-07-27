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
       vector<int>v;
       v.reserve(n);
       int a;
       bool b= true;
       for(int i=0;i<n;i++){
        cin>>v[i];
        if( b && v[i]!=i+1){
            a=abs(v[i]-i-1);
            b=false;
        }
       }
       for(int i=0;i<n;i++){
            if(v[i]!=i+1){
            int c = abs(v[i]-i-1);
            if(a>=c && a%c==0){
                    a=c;
            }
            else if(c>a && c%a==0){
                continue;
            }
            else{
           a=gcd(a,c);
            }
     
            }
            if(a==1){
                break;
            }
       }
        cout<<a<<endl;
    }
    return 0;
}