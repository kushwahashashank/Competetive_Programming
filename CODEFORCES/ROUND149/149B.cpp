#include <bits/stdc++.h>
using namespace std;

int main(){
    int TESTCASES;
    cin>>TESTCASES;
    while(TESTCASES--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        char temp ='<';
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]==temp){
                count++;
                ans=max(ans,count);
            }
            else{
                count=0;
                count++;
                temp=s[i];
            }
        }
        ans=max(ans,count);
        cout<<ans+1<<endl;
    }
    return 0;
}