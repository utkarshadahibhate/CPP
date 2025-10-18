#include<iostream>
using namespace std;

int main(){
    // int i;
    // for(i=1;i<=10;i++){
    //     cout<<i<<" ";
    // }

    int num1,num2,HCF;
    cout<<"Enter two number: ";
    cin>>num1>>num2;

    if (num2>num1)
    {// swapping of numbers
        int temp = num2;
        num2 = num1;
        num1 = temp;    
    }
    for(int i=1; i<=num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
        
    }
    cout<<"HCF of given two number is: "<<HCF<<endl;
    
}