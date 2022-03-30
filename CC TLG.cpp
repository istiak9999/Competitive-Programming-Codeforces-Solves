#include<bits/stdc++.h>

using namespace std ;
int main()
{
    int r,i,p1,p2,t1=0,t2=0,m=0,c;
    cin>>r;
    for(i=0; i<r; i++)
    {
        cin>>p1;
        cin>>p2;
        t1=t1+p1;
        t2=t2+p2;
        if(m<abs(t2-t1))
        {
            m=abs(t2-t1);
            if (t2>t1)
                c=2;
            else
                c=1;

        }

    }

    cout<<c<<" "<<m<<endl;
    return 0;
}
