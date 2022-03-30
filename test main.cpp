#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"   /|"<<endl;
    cout<<"  / | "<<endl;
    cout<<" /  | "<<endl;
    cout<<"/---|"<<endl;
    cout<<"Jackass"<<endl;
    string phrase="Arthur the king  =";
    cout<<phrase;

    cout<< phrase.length()<<endl;
phrase[0]='S';
    cout<<phrase;
    cout<<phrase.find("king",0)<<endl;
    cout<<phrase.substr(11,3)<<endl;
    string phrase_sub=phrase.substr(111,3);
    cout<<phrase_sub<<endl;
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
    cout<<fmax(3,9)<<fmin(5,10)<<endl;

    return 0;
}
