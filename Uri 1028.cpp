#include<bits/stdc++.h>
using  namespace std;
int findgcd(int a,int b)
{
    if (a==0)
        return b;
    return findgcd(b%a,a);

}
int main()
{
    int i,test,num1,num2,result;
    cin>>test;
    for(i=0;i<test;i++)
    {cin>>num1>>num2;
     result =findgcd(num1,num2);
     cout<<result<<endl;

    }


    return 0;



}
