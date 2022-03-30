#include<bits\stdc++.h>
using namespace std;
void  sayHi(string name,int age);
int main()
{
    string a;getline(cin,a);
    int b;
    cin>>b;
    sayHi(a,b);
    sayHi("Sathi",21);


    return 0 ;
}
void  sayHi(string name,int age)
{
    cout<<"hello  "<<name<<" and your age is "<<age<<endl;
}
