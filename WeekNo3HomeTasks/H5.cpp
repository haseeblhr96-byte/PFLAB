#include <iostream>
using namespace std;

int main() 
{
  string name;
  int n=0;
  float time;
    cout << "Enter the name of the person:" ;
   cin>>name;
 cout << "Enter the target weight loss in kilograms:" ;
 cin>>n;
 time=n*15;
  cout << name << " will need "<< time <<" days to lose "<< n <<"kg of weight according to doctor's advice."<<endl;
    return 0;
}