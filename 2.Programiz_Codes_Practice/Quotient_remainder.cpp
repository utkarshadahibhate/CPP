#include<iostream>
using namespace std;

int main(){
    int divisor, dividend, quotient, remainder;
    cout<<"Enter a number to be divided : "<<endl;
    cin>>dividend;
    cout<<"Enter a number to divide by : "<<endl;
    cin>>divisor;
    quotient = (dividend / divisor);
    remainder = (dividend % divisor);

    cout<<"Quotient of the given number is : "<<quotient<<endl;
    cout<<"Remainder after the division is : "<<remainder<<endl;

}