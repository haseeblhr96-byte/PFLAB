#include <iostream>
using namespace std;

int main() 
{
  int n=0,sum=0;
    cout << "Enter the number of Sides of the polygon:" ;
   cin>>n;
   sum=(n - 2) * 180;
  cout << "The total sum of internal angles of a "<< n <<"-sided polygon is : " <<sum<< endl;
    return 0;
}