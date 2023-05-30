#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        int j=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==n){
                j=i;
            }
            if(j==0 && a[i]==n-1){
                j=i;
            }
        }
        if(j==n-1){
            cout<<a[j]<<" "; 
            j--;
            if(a[0]>a[j]){
                for(int i=0;i<=j;i++){
                    cout<<a[i]<<" ";
                }
            }
            else{
                int x=j;
                while(x>=0 && a[x]>a[0]){
                    x--;
                }
                for(int i=j;i>x;i--){
                    cout<<a[i]<<" ";
                }
                for(int i=0;i<=x;i++){
                    cout<<a[i]<<" ";
                }
            }
        }
        else{
            for(int i=j;i<n;i++){
                cout<<a[i]<<" ";
            }
            j--;
             int x=j;
                cout<<a[x]<<" ";
                x--;
                j--;
                while(x>=0 && a[x]>a[0]){
                    x--;
                }
                for(int i=j;i>x;i--){
                    cout<<a[i]<<" ";
                }
                for(int i=0;i<=x;i++){
                    cout<<a[i]<<" ";
                }
        }
        cout<<endl;
        
    }
    return 0;
}