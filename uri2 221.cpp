#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int test,bonus,attack1,defence1,level1,attack2,defence2,level2,count=0;
double  value1,value2;
    cin>>test;
    while(test--)
    {
        cin>>bonus;
        cin>>attack1 >>defence1 >>level1;
        cout<<endl;
        cin>>attack2>>defence2>>level2;
        if(level1%2==0)
           value1=((attack1+defence1)/2)+bonus;
            else
                value1=((attack1+defence1)/2);
            if(level2%2==0)
            value2=((attack2+defence2)/2)+bonus;
            else
                value2=((attack2+defence2)/2);

if(value1>value2)
    printf("Dabriel\n");
else if(value2>value1)
    printf("Guarte\n");
else
    printf("Empate\n");



    }



    return 0;
}
