// Example program
#include <iostream>
#include <string>
using namespace std;
int x;

int par(int x)
{ int ok=0,c;
   
  {while(x)
    { c=x%10;
        x=x/10;
    
        if(c%2==0)
    ok++;
  
  }
   }
if(ok==1)
return 1;
else
return 0;
}


 
   

int main()
{
  cin>>x;
  cout<<par(x);
}
  
