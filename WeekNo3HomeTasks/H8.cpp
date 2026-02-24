#include <iostream>
using namespace std;

int main() 
{
  float vegp,frup,total;
  int veg,fru;
    cout << "Enter Vegetable price per Kilogram(in coins):" ;
   cin>>vegp;
   vegp=vegp/1.94;
  cout << "Enter Fruit price per Kilogram(in coins):";
 cin>>frup;
 frup=frup/1.94;
   cout << "Enter total kilograms of Vegetables:";
 cin>>veg;
 cout << "Enter total kilograms of fruits:";
 cin>>fru;
 total=(vegp*veg)+(frup*fru);
 cout<<"Total earnings in Rupees : (Rs)"<<total;
 return 0;
}