#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        string ans="YES";
        if(a[0]%2==0){
            int odd=0;
            for(int i=0;i<n;i++){
                if(a[i]%2==1){
                    ans="NO";
                    break;
                }
            }
        }
        cout<<ans<<endl;   
    }
    return 0;
}