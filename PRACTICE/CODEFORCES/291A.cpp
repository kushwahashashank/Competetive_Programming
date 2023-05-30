#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a;
    cin>>a;
    long long int b=0;
    stack<int>s;
    while(a>0){
        int temp = a%10;
        temp = min(temp,9-temp);
        s.push(temp);
        a/=10;
    }
    if(s.top()==0){
        b*=10;
        b+=9;
        s.pop();
    }
    while(!s.empty()){
        b*=10;
        b+=s.top();
        s.pop();
    }
    cout<<b<<endl;
    return 0;
}