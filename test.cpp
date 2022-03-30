#include <iostream>
#include<cmath>
using namespace std;

int main()
{

    int num1;
    float num2;
    double num3;

    cin>>num1;
    cin>> num2;
    cin>>num3;
    cout<<num1+num3<<endl;
    cout<<round(num3)<<endl;
    cout<<ceil(num3)<<endl;
    cout<<floor(num3)<<endl;
    cout<<pow(num3,2)<<endl;
    cout<<sqrt(num1)<<endl;
    cout<<fmax(3,9)<<"\t"<<fmin(5,10)<<endl;


    return 0;
}
