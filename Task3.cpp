#include <iostream>
using namespace std;

int main() 
{
  int min=0,fps=0,total=0;
    cout << "Enter Minutes:" ;
   cin>>min;
     cout << "Enter Fps:" ;
   cin>>fps;
   total=min*60*fps;
   cout<<"Total Frames="<<total<<endl;
  
 
    return 0;
}