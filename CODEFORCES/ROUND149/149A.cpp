#include <bits/stdc++.h>
using namespace std;

int main(){
    int TESTCASES;
    cin>>TESTCASES;
    while(TESTCASES--){
        int x,k;
        cin>>x>>k;
        if(x==0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else if(x%k==0){
            cout<<2<<endl;
            if(x<0){
                cout<<x+1<<" "<<-1<<endl;
            }
            else{
                cout<<x-1<<" "<<1<<endl;
            }
        }
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
    return 0;
}