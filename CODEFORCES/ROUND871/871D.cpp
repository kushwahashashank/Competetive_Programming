#include<bits/stdc++.h>
using namespace std;
bool Sol(int n ,int &m){
    if(n==m){
        return true;
    }
    bool q=false;
    if(n%3==0){
        int a=n/3;
        n-=a;
        if(a>=m){
            bool e= Sol(a,m);
            if(e){
                q=true;
            }
        }
        if(n>=m){
            bool e= Sol(n,m);
             if(e){
                q=true;
            }
        }
    }
    return q;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int n,m;
      cin>>n>>m;
    bool b= Sol(n,m);
    if(b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}