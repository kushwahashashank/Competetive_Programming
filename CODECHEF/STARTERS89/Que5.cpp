#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n,m,k;
        cin>>n>>m>>k;
        long long int suma=0,sumb=0;
        int ans =0;
        for(int i=0;i<n;i++){
            int w;
            cin>>w;
            suma+=w;
        }
        for(int i=0;i<m;i++){
            int w;
            cin>>w;
            sumb+=w;
        }
        double a=double(suma)/double(n);
        double b=double(sumb)/double(m);
        cout<<a<<" "<<b<<endl;
        while(a<b){
            double temp = a;
            suma+=k;
            n++;
            ans++;
            a=double(suma)/double(n);
            cout<<"a "<<a<<endl;
            if(a==temp){
                ans=-1;
                break;
            }  
            
        }
        

        // cout<<ans<<endl;
        
    }
    return 0;
}