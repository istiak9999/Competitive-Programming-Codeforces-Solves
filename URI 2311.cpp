#include<bits/stdc++.h>
using namespace std;
float findmaximum(float arr[])
{
    int i;
    float maximum;
    maximum=arr[0];
    for(i=0;i<7;i++)
    {
        if(arr[i]>maximum)
        maximum=arr[i];


    }
    return maximum;



}
float findminimum(float arr[])
{
    int i;
    float minimum;
    minimum=arr[0];
    for(i=0;i<7;i++)
    {
        if(minimum>arr[i])
        minimum=arr[i];


    }
    return minimum;



}

int main()
{

    int t,i;
    cin>>t;
    string name;

    float arr[7],maximum,minimum,D;
    while(t--)
    {double  sum=0,ans=0;
        cin>>name;
        cin>>D;
        for(i=0;i<7;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        maximum=findmaximum(arr);

        sum-=maximum;
        minimum=findminimum(arr);
        sum-=minimum;

        ans=sum*D;
        cout<<fixed<<setprecision(2)<<name<<" "<<ans<<"\n";

    }

    return 0;
}
