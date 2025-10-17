#include<iostream>
using namespace std;

// To generate fibonacci sequence up to a certain number
int main(){
    int temp1 = 0, temp2 = 1, nextterm = 0, user;
    cout<<"Enter a positive number: ";
    cin>>user;

    // to display the first two terms which is always 0 and 1
    cout<<"Fibonacci Series: "<<temp1<<", "<<temp2<<", ";

    nextterm = temp1 + temp2;

    while(nextterm <= user){
        cout << nextterm <<", ";
        temp1 = temp2;
        temp2 = nextterm;
        nextterm = temp1 + temp2;
    }
}