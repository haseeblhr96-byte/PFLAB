#include<iostream>
using namespace std;
int main(){
int bill=0,dis=0;
cout<<"Enter your bill:";
cin>>bill;
if (bill<=5000)
{
    dis=(bill*5)/100;
    bill=bill-dis;
    cout<<"Your discounted bill is : "<<bill;
}
else{
     dis=(bill*10)/100;
     bill=bill-dis;
    cout<<"Your discounted bill is : "<<bill;
}
   

    return 0;
}