#include<iostream>
using namespace std;
int main(){
int sal=10000,laptop=50000,fifty=0,months=0;
fifty=(sal*50)/100;
fifty=fifty*6;
laptop=laptop-fifty;
sal=5000;
laptop=laptop/sal;
cout<<"Months required to buy laptops:"<<laptop;

   

    return 0;
}