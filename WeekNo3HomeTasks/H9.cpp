#include <iostream>
using namespace std;

int main() 
{
  int n=0,sum=0,a,b,c,d;
    cout << "Enter a four diit number:" ;
   cin>>n;
   a=n%10;
   n=n/10;
   sum=sum+a;
    b=n%10;
    n=n/10;
   sum=sum+b;
    c=n%10;
    n=n/10;
   sum=sum+c;
   d=n%10;
    n=n/10;
   sum=sum+d;

    
   cout<<"Sum of individual digits:"<<sum<<endl;
  
 
    return 0;
}