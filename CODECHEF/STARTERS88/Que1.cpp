#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        vector<int>v(n,0);
        int max1=INT_MIN,max2=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>v[i];
            max1=max(max1,v[i]);
        }
        for(int i=0;i<n;i++){
            if(v[i]!=max1){
                max2=max(max2,v[i]);
            }
        }
        cout<<max1+max2<<endl;
    }
    return 0;
}