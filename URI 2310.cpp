#include<bits\stdc++.h>
using namespace std;
int main()
{
    int i,test;

    cin>>test;
    string name;
    double s1,b1,a1,s2,b2,a2,s3=0,b3=0,a3=0,s4=0,b4=0,a4=0;
  while(test--)
    {

        cin>>name>>s1>>b1>>a1;
      cin>>s2>>b2>>a2;
       s3+=s1;
       s4+=s2;
        b3+=b1;
        b4+=b2;
        a3+=a1;
        a4+=a2;
    }
    double S,B,A;
    S=(s4/s3)*100;
    B=(b4/b3)*100;
    A=(a4/a3)*100;
    printf("Pontos de Saque: %.02f %%.\n",S);
    printf("Pontos de Bloqueio: %.02f %%.\n",B);
    printf("Pontos de Ataque: %.02f %%.\n",A);




return 0;
}
