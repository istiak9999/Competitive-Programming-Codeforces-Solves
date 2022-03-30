#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[50];
    int n,i,j,k;
    cin>>n;
    k=0;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]==s[i-1])
        {

            k++;
        }
    }

cout<<k<<endl;

    return 0;
}
