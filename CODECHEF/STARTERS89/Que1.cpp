#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b+c)<d){
            cout<<"YES"<<endl;
        }
        else if((a+b+d)<c){
            cout<<"YES"<<endl;
        }
        else if((d+b+c)<a){
            cout<<"YES"<<endl;
        }
        else if((a+d+c)<b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}