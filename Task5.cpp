#include <iostream>
using namespace std;

int main() 
{
  int age=0,moves=0,avg=0;
    cout << "Enter age:" ;
   cin>>age;
     cout << "Enter Moves:" ;
   cin>>moves;
   avg=(age)/(moves+1);
   cout<<"Average years="<<avg<<endl;
  
 
    return 0;
}