#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{

int r,c;
scanf("%d %d",&r,&c);
int m;
m=pow(2,r+c)-pow(2,r)-pow(2,c)+1;
printf("%d ",m);

int a[22],i;
for(i=0;i<22;i++)
{
    a[i]=i;

}
int z= sizeof(a)/sizeof(a[0]);

printf("\n%d",z);

char l[10];
gets(l);
int len;
len= strlen(l);
printf("%d",l);


return 0;
}
