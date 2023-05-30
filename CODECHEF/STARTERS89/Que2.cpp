#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        string s;
        cin>>s;
        int a =0;
        a*=10;
        a+=(s[0]-48);
        a*=10;
        a+=(s[1]-48);
        int b = 0;
        b*=10;
        b+=(s[3]-48);
        b*=10;
        b+=(s[4]-48);
        if(a>12){
            cout<<"DD/MM/YYYY"<<endl;
        }
        else if(b>12){
            cout<<"MM/DD/YYYY"<<endl;
        }
        else{
            cout<<"BOTH"<<endl;
        }
    }
    return 0;
}