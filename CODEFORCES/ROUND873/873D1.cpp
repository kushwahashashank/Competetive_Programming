#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
       int n;
       cin>>n;
       int a[n],b[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
       }
        long long int ans=0;
        sort(a,a+n);
        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                i++;
            }
            else{
                ans+=i-x;
                x=i+1;
            }
        }
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         int b[j-i+1];
        //         for(int l=i;l<=j;l++){
        //             b[l-i]=a[l];
        //         }
        //         sort(b,b+j-i+1);
        //         int k=i;
        //         for(int l=i;l<=j;l++){
        //             if(b[l-i]==a[l]){
        //                  k++;  
        //             }
        //             else{
        //                 break;
        //             }
        //         }
        //         if(k>j){
        //             k--;
        //         }
        //         ans+=j-k;
        //     }
        // }

        cout<<ans<<endl;

    }
    return 0;
}