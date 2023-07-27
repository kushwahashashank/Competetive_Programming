#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n)
{   
    if (n <= 1)
        return false;
 
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,x=-1,y=-1,count=0;
        cin>>a>>b;
        if(isPrime(a) || isPrime(b) || a==1 || b==1){
            if(a==b){
                a--;
            }
            count =1;
        }
        else{
            count = 2;
            int m = max(a,b);
            if(m==a){
                y=b;
            }
            else{
                x=a;
            }
            while(!isPrime(m)){
                m--;
            }
            if(x==-1){
                x=m;
            }
            else{
                y=m;
            }
            
        }
        cout<<count<<endl;
        if(count==2){
            cout<<x<<" "<<y<<endl;
        }
        cout<<a<<" "<<b<<endl;
    }
}