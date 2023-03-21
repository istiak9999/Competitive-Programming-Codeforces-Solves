#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long int a)
{
    if(a<2) return false;
    else if(a==2) return true;
    else if(a%2==0) return false;
    else{
        for(int i=3;i*i<=a;i+=2){
            if(a%i==0) return false;
        }
    }
    return true;
}
int main()
{
    long long int n,y;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        y=sqrt(n);
        if(y*y==n && isPrime(y)==true) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl;
 
/* 
As T-prime = square of prime number, that's why we check two conditions:
      1) is y=sqrt(n) a prime?
      2) y*y = n ( here, y is prime.So, y*y should be square of prime)
*/
         
    }
  
  
}