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
#define REP(i,a,b) for (int i = a; i <b; i++)
#define SQ(a) a*a
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
	vector<char> v;
	char x;
	string s;
	getline(cin,s);
	REP(i,0,s.size())
	{
		if (isalpha(s[i])){
			v.push_back(s[i]);
		}
	}
int j,k;
for (j=0;j<v.size();j++){
	for (k=j+1;k<v.size();k++)
	{
		if(v[j]==v[k])
		{
			v[k]=0;
		}
	}
}
int count=0;
for(auto x:v){
	if(isalpha(x)){
		count++;
	}

}

cout<<count<<endl;



    return 0;
}