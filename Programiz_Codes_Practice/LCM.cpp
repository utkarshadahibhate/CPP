#include<iostream>
using namespace std;

int main(){
    // // Ternary or Conditional Operators
    // //Expression1 ? Expression2 : Expression3 --------- Exp ? True : False
    // // if Expression1 -- True -- Execute Expression2
    // // if Expression2 -- True -- Execute Expression3
    // int marks;
    // cout<<"Enter your marks: "<<endl;
    // cin>>marks;
    // // Ternary Conditional Operator
    // string result = (marks >=35) ? "Pass" : "Fail";
    // cout<<"Given your marks you are : "<<result<<endl;

    // LCM code 
    int num1, num2, max;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    max = (num1 > num2) ? num1 : num2;

    if(max % num1 == 0 && max % num2 == 0)
    {
        cout<<"LCM is : "<<max<<endl;
    }
    else
    {
        max++;
    }
}