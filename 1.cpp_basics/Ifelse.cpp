#include<iostream>
using namespace std;

int main()
{// Simple if statement
    // int age = 2;

//     if(age>18){
//         cout<<"You can vote"<<endl;
//     }

// -----------------------------------------------------------------------------------------------------
// // if else statement
//     if(age>18){
//         cout<<"You can vote"<<endl;
//     }else{
//         cout<<"Not allowed, reach the age limit first"<<endl;
//     }

// -----------------------------------------------------------------------------------------------------
//If else if ladder
// int marks;

// cout<<"Enter your marks to know your grades"<<endl;
// cin>>marks;

// if(marks>=90){
//     cout<<"A Grade"<<endl;
// }
// else if(marks>=80){
//     cout<<"B Grade"<<endl;
// }
// else if(marks>=70){
//     cout<<"C Grade"<<endl;
// }
// else if(marks>=60){
//     cout<<"D Grade"<<endl;
// }
// else if(marks>=35){
//     cout<<"E Grade"<<endl;
// }
// else{
//     cout<<"Fail"<<endl;
// }

// ----------------------------------------------------------------------------------------------------
// Nested if else
double age,weight;
cout<<"Enter your age first"<<endl;
cin>>age;
cout<<"Now enter your weight "<<endl;
cin>>weight;

if(age>18)
{
    if(weight>50)
    {
        cout<<"You are eligible to donate blood!"<<endl;
    }else
    {
        cout<<"Weight is less than 50, not eligible to donate blood"<<endl;
    }
    
}
// -----------------------------------------------------------------------------------------------------
// Greater number code

// int a,b,c;
// cout<<"Enter integer values for a, b, c"<<endl;
// cin>>a>>b>>c;

// if(a>b){
//     if(a>c){
//         cout<<"A is greater"<<endl;
//     }else{
//         cout<<"C is greater"<<endl;
//     }
// }else{
//     if(b>c){
//         cout<<"B is greater"<<endl;
//     }else{
//         cout<<"C is greater"<<endl;
//     }
    
// }
// --------------------------------------------------------------------------------------------------------
// Another way of greater than code

// int a,b,c;
// cout<<"Enter integer values for a,b,c"<<endl;
// cin>>a>>b>>c;

// if(a>b && a>c){
//     cout<<"A is Greater"<<endl;
// }else if(b>a && b>c){
//     cout<<"B is Greater"<<endl;
// }else{
//     cout<<"C is Greater"<<endl;
// }


}