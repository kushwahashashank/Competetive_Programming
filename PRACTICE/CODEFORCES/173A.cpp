#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int val =0;
    for(int q=0;q<t;q++){
        string s;
        cin>>s;
        if(s=="X++" || s=="++X"){
            val++;
        }
        else{
            val--;
        }
    }
    cout<<val<<endl;
    return 0;
}