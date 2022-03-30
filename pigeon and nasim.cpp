#include<bits/stdc++.h>
using namespace std;
int main()
{
    float h,x,v;
   float te,ts,a,b;
    cin>>h>>x>>v;
    a=(2*h)/9.8;
    te=sqrt(a);
    ts=x/v;
    if(ts<te)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        b=x/te;

        printf("NO %.2f m/s\n",b-v);
    }

    return 0;
}
