#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
       int n,m;
       cin>>n>>m;
       map<int,int>mp;
       for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]++;
       }
       map<int,int>v;
       map<int, int>::iterator it=mp.begin();
       while(it!=mp.end()){
        v[it->second]++;
        it++;
       }
       it=v.begin();
            vector<int>y;
       while(it!=v.end()){
        y.push_back(it->second);
        it++;
       }

    int a2=0,a1=INT_MAX,a3=INT_MIN;
    for(int j=0;j<3;j++){
        a2+=y[j];
        a1=min(a1,y[j]);
        a3=max(a3,y[j]);
    }
    a2-=a1;
    a2-=a3;
  
       if(a1==0){
cout<<a2-1<<" "<<a3/(a2-1)<<endl;
       }
       else{
        cout<<a2<<" "<<a3/a2<<endl;
       }
       

    }
    return 0;
}