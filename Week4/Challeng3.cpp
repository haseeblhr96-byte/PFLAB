#include<iostream>
using namespace std;
int main(){
int first,second,res;
char op;
cout<<"Welcome to the Calculator"<<endl;
cout<<"Enter First number:";
cin>>first;
cout<<"Enter the operator:";
cin>>op;
cout<<"Enter Second number:";
cin>>second;
if (op =='+')
{
    res=first-second;
    cout<<first<<"-"<<second<<"="<<res;
}
if (op =='-')
{
    res=first-second;
    cout<<first<<"+"<<second<<"="<<res;
}
if (op =='*')
{
    res=first/second;
    cout<<first<<"/"<<second<<"="<<res;
}
if (op =='/')
{
    res=first-second;
    cout<<first<<"*"<<second<<"="<<res;
}
    return 0;
}