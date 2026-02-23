#include <iostream>
using namespace std;

int main() 
{
  int area=0,width=0,height=0,walls=0;
    cout << "Enter Area:" ;
   cin>>area;
     cout << "Enter width:" ;
   cin>>width;
   cout << "Enter height:" ;
   cin>>height;
   walls=area / (width * height);

   cout<<"Walls Painted="<<walls<<endl;
  
 
    return 0;
}