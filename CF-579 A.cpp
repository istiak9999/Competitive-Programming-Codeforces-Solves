#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    cin>>x;
    string s = bitset<64>(x).to_string();
    int c=0;
    for(int i=0; i<64 ; i++)
    {
        if(s[i]=='1')
            c++;
    }
    cout<<c<<endl;

}