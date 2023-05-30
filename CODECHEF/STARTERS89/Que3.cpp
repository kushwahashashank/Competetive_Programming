#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){

        int y;
        cin>>y;
        if(y==0){
            cout<<1<<endl;
        }
        else{
        long long int f = (2*y)-1;
        long long int b = y;
        long long int ans =b+f+1;
        cout<<ans<<endl;
        }
        
    }
    return 0;
}