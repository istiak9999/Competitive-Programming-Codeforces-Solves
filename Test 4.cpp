#include<iostream>
using namespace std;
double cube(int a);
int main()
{
    cout<<cube(5)<<endl;
    bool ismale=true;
    bool istall=false;
    if(ismale&&!istall)
        cout<<"yesssss\n";
    else
        cout<<"nooooooo\n";


    return 0;
}
double cube(int a)
{
    return a*a*a;
}
