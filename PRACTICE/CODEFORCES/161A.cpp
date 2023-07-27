#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=0,y=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a;
            cin>>a;
            if(a==1){
                x=i;
                y=j;
            }
        }
    }
    int ans= abs(x-2)+abs(y-2);
    cout<<ans<<endl;
    return 0;
}