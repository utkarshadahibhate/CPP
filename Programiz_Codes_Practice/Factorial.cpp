#include<iostream>
using namespace std;

int main()
{
    int user,fact=1;
    cout<<"Enter a number to calculate its factorial: ";
    cin>>user;
    for(int i=1; i<=user; i++)
    {
        fact*=i;

    }
    cout<<"Factorial is: "<<fact<<endl;
}