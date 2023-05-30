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
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int s=2*n+1;
        int ma[s];
        int mb[s];
        for(int j=0;j<=s;j++){
            ma[j]=0;
            mb[j]=0;
        }
        int c=1;
        int temp = a[0];
        int i=1;
        while(i<n){
            if(a[i]==temp){
                c++;
            }
            else{
                int x = ma[temp];
                ma[temp]= max(c,x);
                temp = a[i];
                c=1;
            }
            i++;
        }
        int y = ma[temp];
        ma[temp]= max(c,y);
        c=1;
        temp=b[0];
        i=1;
        while(i<n){
            if(b[i]==temp){
                c++;
            }
            else{
                int x = mb[temp];
                mb[temp]= max(c,x);
                temp=b[i];
                c=1;
            }
            i++;
        }
        y = mb[temp];
        mb[temp]= max(c,y);
        int ans=0;
        for(int i=0;i<=2*n+1;i++){
            int l=ma[i]+mb[i];
            ans= max(l,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}