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
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(make_pair(a[i],x));
        }
        sort(v.begin(),v.end());
        int i=-1,j=1;
        int ans=0;
        while(i<n && i+1<n){
            i++;
            j=i+1;
            while(v[i].first*v[j].first<= 2*n && i<n && j<n){
                if(v[i].first*v[j].first == v[i].second + v[j].second){
                    ans++;
                }
                j++;
            }
            if(i+1==j && v[i].first*v[j].first > 2*n){
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}