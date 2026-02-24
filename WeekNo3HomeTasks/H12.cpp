#include <iostream>
using namespace std;

int main() 
{
  int area=0,width=0,height=0,walls=0;
    cout << "Number of square meter you can paint:" ;
   cin>>area;
     cout << "Enter width of wall:" ;
   cin>>width;
   cout << "Enter height of wall:" ;
   cin>>height;
   walls=area / (width * height);

   cout<<"Number of walls you can paint="<<walls<<endl;
  
 
    return 0;
}