#include <iostream>
using namespace std;

long long  modular(long long a, long long b , long long s) {
 long long M = 1000000007;
 if (b == 0) return 1;
 if (b == 1) return a;

 if (b % 2 == 0) {
  long long ans = modular (a, b/2,M);
  return (ans * ans) % s;
 }
 else {
  long long ans = modular (a, ((b-1)/2),M);
  return ((a * ans) %s * ans) % s;
 }
}


int main() {
     int T;
     cin>>T;
     for(int i=0;i<T;i++){
         long long n,m;
         cin>>n>>m;
         long long M = 1000000007;
         
         long long value = modular (2,n,M)-1;
         
         cout<<modular (value,m,M)<<endl;
         
     }
	return 0;
}