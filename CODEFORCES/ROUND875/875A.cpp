#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int TESTCASES;
    cin>>TESTCASES;
    while(TESTCASES--){
       int n;
       cin>>n;
       int a[n];
       int b[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=n-a[i]+1;
       } 
       for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}