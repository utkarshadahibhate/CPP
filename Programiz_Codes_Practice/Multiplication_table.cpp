#include<iostream>
using namespace std;

int main()
{
int user;
cout<<"Enter a number of your choice: "<<endl;
cin>>user;
cout<<"Multiplication_Table of the given number is: ";
for(int i=1; i<=10; i++)
{
    cout<<user<<" x "<<i<<" = "<<user*i<<endl;
}
}