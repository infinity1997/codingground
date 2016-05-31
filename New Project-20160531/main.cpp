// Example program
#include <iostream>
#include <string>
using namespace std;
int x,n,v[100];

int par(int x)
{ int ok=0,c;
   
  {while(x)
    { if(x%10%2==0)
    ok++;
    x=x/10;
  
  }
   }
if(ok==1)
return 1;
else
return 0;
}

void citire(int v[100],int n)
{
    for(int i=1;i<=n;i++)
 
    cin>>v[i];
}
void par1(int v[100],int n)
{int a;
    for(int i=1;i<=n;i++)
{a=v[i];
if(par(a)==1)
cout<<a<<" ";
}}

 int main()
{

  cout<<"n= ";cin>>n;
  citire(v,n);
 par1(v,n);
}
  
