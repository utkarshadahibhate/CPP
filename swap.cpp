// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10,b=20;
//     int temp;


//     cout<<"A: "<<a<<endl;
//     cout<<"B: "<<b<<endl;

//     temp=a;
//     a=b;
//     b=temp;

//     cout<<"A: "<<a<<endl;
//     cout<<"B: "<<b<<endl;


// }



#include<iostream>
using namespace std;
int main(){
    int a = 10,b=20;
    
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
   
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;


}