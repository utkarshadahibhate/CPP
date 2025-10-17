#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year to check for leap year: "<<endl;
    cin>>year;
    // if(year % 400 == 0)
    // {
    //     cout<<"Great It's a leap year"<<endl;
    // }
    // else if(year % 100 == 0)
    // {
    //     cout<<"It's a great year but not a leap year"<<endl;
    // }
    // else if(year % 4 == 0)
    // {
    //     cout<<"It's a leap year"<<endl;
    // }
    // else
    // {
    //     cout<<"Not a leap year"<<endl;
    // }

    // // Using nested-if
    // if(year % 4 == 0)
    // {
    //     if(year % 100 != 0)
    //     {
    //         if(year % 400 == 0)
    //         {
    //             cout<<"It's a leap year: "<<year<<endl;

    //         }
    //         else
    //         {
    //             cout<<"It's not a leap year: "<<year<<endl;
    //         }
    //     }
    //     else
    //     {
    //         cout<<"It's a leap year: "<<year<<endl;
    //     }
    // }
    // else
    // {
    //     cout<<"It's not a leap year: "<<year<<endl;
    // }

// Using logical operators
if((year % 4 == 0 ) && (year % 100 != 0) || year % 400 == 0)
{
    cout<<"It's a leap year: "<<year<<endl;
}
else
{
    cout<<"It's not a leap year: "<<year<<endl;
}


}