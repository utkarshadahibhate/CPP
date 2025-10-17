#include<iostream>
using namespace std;

int main(){
// Check for even and odd number
    double a;
    // // check for divisibility
    // cout<<"Enter a number to check for odd_even"<<endl;
    // cin>>a;
    // if((int)a%2 == 0){
    //     cout<<"Given number is an even"<<endl;
    // }else{
    //     cout<<"It's an odd number"<<endl;
    // }
// Positive and negative
    cout<<"Enter a number to check for positive and negative "<<endl;
    cin>>a;
    if(a>0){
        cout<<"Given number is positive"<<endl;
    }else if(a == 0){
        cout<<"Given number is 0"<<endl;
    }else{
        cout<<"Given number is negative"<<endl;
    }

}