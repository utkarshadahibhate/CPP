#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;

    // // with simple if-else
    // if(num1>num2 && num1>num3){
    //     cout<<"Largest amongst the given number is num1: "<<num1<<endl;
    // }else if(num2>num1 && num2>num3){
    //     cout<<"Largest amongst the given number is num2: "<<num2<<endl;
    // }else{
    //     cout<<"Largest amongst the given number is num3: "<<num3<<endl;
    // }

    // with nested if else

    if(num1>num2){
        if (num1>num3){
            cout<<"Largest amongst the given number is num1: "<<num1<<endl;
        }else{
            cout<<"Largest amongst the given number is num3: "<<num3<<endl;
        }
    }else{
        if(num2>num3){
            cout<<"Largest amongst the given number is num2: "<<num2<<endl;
        }else{
            cout<<"Largest amongst the given number is num3: "<<num3<<endl;
        }
    }
    
    
}