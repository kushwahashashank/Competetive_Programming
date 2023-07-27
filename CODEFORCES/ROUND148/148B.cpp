#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n,k;
        cin>>n>>k;
        vector<int>v;
        long long sum = 0;
        int y=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            sum+=a;
            v.push_back(a);
        }
        int j = n-1;
sort(v.begin(),v.end());
        for(int i=0;i<k;i++){
            sum-=v[j];
            j--;
        }
        long long int temp =sum;
        int i=0;
        j++;
        while(k>0){
            
            int x = v[i]+v[i+1];

            i+=2;
            
            temp-=x;
            temp+=v[j];
            j++;
            sum=max(sum,temp);
            k--;
        }
        cout<<sum<<endl;
    }
    return 0;
}