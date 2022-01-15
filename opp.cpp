    
#include <iostream>

using namespace std;

int main()
{
    long n,pv=1,ans=0,l=0;
    cin>>n;
    while(n!=0)
    {
        int k=n%2;
        l= k*pv+l;
        
        
        n=n/2;
        pv=pv*10;
    
      	
        
        
    }
   cout<<l;
    
}


