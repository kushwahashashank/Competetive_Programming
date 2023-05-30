#include <bits/stdc++.h>
using namespace std;

int main(){
    int TESTCASES;
    cin>>TESTCASES;
    while(TESTCASES--){
        string s;
        cin>>s;
        int j=1;
        if(s[0]=='?'){
            s[0]='0';
        }
        char c = '0';
        int i=1;
        for(i=1;i<s.length();i++){
            if(s[i]=='?'){
                continue;
            }
            else{
                if(s[i]=='1' && c=='1'){
                    for(int k=j;k<i;k++){
                        s[k]='1';
                    }
                }
                else if(s[i]=='0' && c=='0'){
                    for(int k=j;k<i;k++){
                        s[k]='0';
                    }
                }
                else{
                    for(int k=j;k<i;k++){
                        s[k]='1';
                    }
                }
                while(s[i]!='?' && i<s.length()){
                        c=s[i];
                        i++;
                        j=i;
                }
            }
        }
        if(s[i-1]=='?'){
            for(int k=j;k<i;k++){
                s[k]='1';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}