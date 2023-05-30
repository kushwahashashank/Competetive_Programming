#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n;
        cin>>n;
        if(n%2==1){
            int a=1;
            for(int i=0;i<n;i++){
                cout<<a<<" ";
                a++;
            }
        }
        else{
            int a=2;
            for(int i=0;i<n;i++){
                cout<<a<<" ";
                a+=2;
            }
        }
        cout<<endl;
    }
    return 0;
}