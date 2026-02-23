#include <iostream>
using namespace std;

int main() 
{
  int twop=0,threep=0,final=0;
    cout << "Enter 2 Pointers:" ;
    cin>>twop;
  cout << "Enter 3 Pointers:";
  cin>>threep;
  twop=twop*2;
  threep=threep*3;
  final=twop+threep;
  cout<<"Total points="<<final<<endl;
    return 0;
}