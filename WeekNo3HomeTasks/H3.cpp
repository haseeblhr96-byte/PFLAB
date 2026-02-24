#include <iostream>
using namespace std;

int main() 
{
  int initialv=0,acc=0,time=0,finalv=0;
    cout << "Enter Initial Velocity(m/s):" ;
   cin>>initialv;
     cout << "Enter Acceleation(m/s^2):" ;
   cin>>acc;
   cout << "Enter Time(s):" ;
   cin>>time;
   finalv=(acc*time) + initialv;

   cout<<"Final Velocity="<<finalv<<endl;
  
 
    return 0;
}