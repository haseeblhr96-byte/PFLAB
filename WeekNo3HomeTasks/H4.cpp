#include <iostream>
using namespace std;

int main() 
{
  int players=0,chance=0;
  float imposters=0;
    cout << "Enter Imposter Count:" ;
   cin>>imposters;
     cout << "Enter Player Count:" ;
   cin>>players;
   chance=100 *(imposters / players);
   cout<<"Chance of being an imposter="<<chance<<"%"<<endl;
  
 
    return 0;
}