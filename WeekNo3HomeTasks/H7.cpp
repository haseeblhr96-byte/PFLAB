#include <iostream>
using namespace std;

int main() 
{
  int adult,child,asold,csold,per,total,don,left;
  string name;
    cout << "Enter the Movie name:" ;
   cin>>name;
   
  cout << "Enter the adult ticket price: $";
 cin>>adult;
   cout << "Enter the child ticket price: $";
 cin>>child;
 cout << "Enter the Number of adult tickets sold:";
 cin>>asold;
 cout << "Enter the Number of child tickets sold:";
 cin>>csold;
 cout<<"Enter the percentage of amount to be donated to the charity:";
 cin>>per;
total=(adult*asold)+(child*csold);
don=(total*per)/100;
left=total-don;
 cout<<"-------------------------------------------------------------------"<<endl;
cout<<"Movie = "<<name<<endl;
cout<<"Total amount generated from ticket sales= $"<<total<<endl;
cout<<"Donation to Charity ("<<per<<"): $"<<don<<endl;
cout<<"Remaining amount after donation= $"<<left<<endl;
    return 0;
}