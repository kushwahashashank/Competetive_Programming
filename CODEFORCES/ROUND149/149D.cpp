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
        stack<char>st;
        int color = 1;
        int curent_color=1;
        vector<int>v(s.length(),0);
        int j=0;
        int i=0;
        while(i<s.length()){
            if(st.size()==0){
                for(int k=j;k<i;k++){
                    v[k]=curent_color;
                }
                j=i;
                st.push(s[i]);
                if(s[i]=='('){
                   curent_color=1; 
                }
                else{
                    color = 2;
                    curent_color=2;
                }
            }
            else{
                if((s[i]=='(' && st.top()==')')||(s[i]==')' && st.top()=='(')){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            i++;
        }
        if(st.size()==0 && v[v.size()-1]==0){
            int l=v.size()-1;
            while(v[l]==0){
                v[l]=curent_color;
                l--;
            }
        }
        set<int>d;
        for(i=0;i<v.size();i++){
            d.insert(v[i]);
        }
        if(st.size()>0){
            cout<<-1<<endl;
        }
        else{
            cout<<d.size()<<endl;
            if(d.size()==1){
 for(int x=0;x<v.size();x++){
           cout<<1<<" ";
        }
            }
            else{
                 for(int x=0;x<v.size();x++){
           cout<<v[x]<<" ";
        }
            }
       
        cout<<endl;
        }
    }
    return 0;
}