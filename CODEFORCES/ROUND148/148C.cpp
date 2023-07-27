#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n;
        cin>>n;
        vector<int>v,b;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        b.push_back(v[0]);
        int temp1 = -1,temp2=-1;
 
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]){
                continue;
            }
            else if(v[i-1]<v[i]){
                temp1 = v[i];
                if(temp2!=-1){
                    b.push_back(temp2);
                    temp2=-1;
                }
            }
            else{
                temp2 = v[i];
                if(temp1!=-1){
                    b.push_back(temp1);
                    temp1=-1;
                }
            }


        }
        if(temp1!=-1){
            b.push_back(temp1);
        }
                if(temp2!=-1){
            b.push_back(temp2);
        }
 
        cout<<b.size()<<endl;

    }
    return 0;
}