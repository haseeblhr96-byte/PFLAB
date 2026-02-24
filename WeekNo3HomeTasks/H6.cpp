#include <iostream>
using namespace std;

int main() 
{
  int size=0,cost=0,area=0,perpound=0,persft=0;
    cout << "Enter Size of fertilizer bag in pounds:" ;
   cin>>size;
     cout << "Enter the cost of the bag : $" ;
   cin>>cost;
   cout << "Enter Area in square feet that can be covered by the bag:" ;
   cin>>area;
   perpound=cost/size;
   persft=cost/area;

   cout<<"Cost of fertilizer per pound: $"<<perpound<<endl;
 cout<<"Cost of fertilizing per square foot: $"<<persft<<endl;
  
 
    return 0;
}