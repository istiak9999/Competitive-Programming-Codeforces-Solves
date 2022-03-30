#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e5+7;
const int mxN=3000000;
const int mod=998244353;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)  cout << #x << "=" << x << endl
#define debug2(x, y)  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define DEBUG 0
int main ()
{
    int r,h,t,i,l;
    float c;
    cin>>r;
    while(r--)
    {
        cin>>h>>c>>t;
        if(h>50&&c<0.7 &&t>5600 )
            cout<<10<<endl;
        else if(h>50&&c<0.7 &&t<=5600 )
            cout<<9<<endl;
        else if(h<=50&&c<0.7 &&t>5600 )
            cout<<8<<endl;
        else if(h>50&&c>=0.7 &&t>5600 )
            cout<<7<<endl;
        else if(h>50||c<0.7 ||t>5600 )
            cout<<6<<endl;
        else if(h<=50&&c>=0.7 &&t<=5600 )
            cout<<5<<endl;
    }
    return 0;
}

