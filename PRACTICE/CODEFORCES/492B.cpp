#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,l;
    cin>>n>>l;
    vector<int>v(l+1,0);
    for(int i=0;i<l;i++){
        int temp;
        cin>>temp;
       v[temp]=1;
    }
    int i=0;
    while(v[i]==0){
        i++;
    }
    float x=0;
    float max=0;
    for(int j=i;j<l;j++){
        if(v[j]==0){
            x++;
        }
        else{
            if(x>max){
                max=x;
            }
            x=1;
        }
    }
    cout<<setprecision(9)<<max/2<<endl;
    return 0;
}