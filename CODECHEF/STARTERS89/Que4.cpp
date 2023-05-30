#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        long long int sum=0,count=0;
        int ans=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0,j=n-1;
        while(i<j){
            long long int temp1 = sum;
            long long int temp2 = sum;
            count++;
            temp1+=arr[i];
            temp2+=arr[j];
            if(((count+1)*count)/2==temp1){
                ans=n-count;
                break;
            }
            else if(((count+1)*count)/2==temp2){
                ans=n-count;
                break;
            }
            else{
                sum=min(temp1,temp2);
            }
            if(temp1 > temp2){
                j--;
            }
            else{
                i++;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}