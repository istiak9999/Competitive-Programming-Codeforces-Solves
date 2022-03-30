#include<bits/stdc++.h>
using namespace std;
int main()
{
   int h1,h2,m1,m2,h3,m3,result;

    for(;;)
    {
       cin>>h1>>m1>>h2>>m2;
        if(h1==0&&h2==0&&m1==0&&m2==0)
        {

        break;}
        if(h1<=h2)
         h3=(h2-h1)*60;
         else
            h3=(24-(h1-h2))*60;
                if(m1<=m2)
         h3+=(m2-m1);
         else
            h3+=60-60-m1+m2;
            if(h1==h2&&m1>m2)
            h3=23*60+(60-m1+m2);




    cout<<h3<<endl;




    }



    return 0;

}
