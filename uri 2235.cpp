#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    int i,j,temp;
    for(i=0;i<3;i++)
        cin>>a[i];

for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            if (a[j] > a[i])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}


        }}
        int d,b,c;
        d=a[0];
        b=a[1];
        c=a[2];
        if (d==b || d==c||b==c )cout<<"S"<<endl;
        else if (d+b==c)cout<<"S"<<endl;
        else cout<<"N"<<endl;



    return 0;
}
