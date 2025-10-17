#include <iostream>
using namespace std;

int main()
{
    // int  i=1;
    // for(;;){
    //     cout<<"hi";
    // }

    // Break

    // for(i=1;i<=10;i++){
    //     cout<<i<<endl;
    //     if(i==5){
    //         break;
    //     }

    // }
    // int j;
    //     int count =1;
    //      for(i=1;i<=4;i++){
    //         for(j=1;j<=4;j++)
    //        {
    //         if(i==2 && j ==2){
    //             // break;
    //             goto last;
    //         }
    //         cout<<count<<" : "<<i<<" "<<j<<endl;
    //         count++;
    //        }
    //     }
    //     cout<<"Last Line";
    //     last:

    int i = 1;
    // continue

    // for (i = 1; i <= 10; i++)
    // {
       
    //     if (i == 5 || i ==7)
    //     {
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    point:
    cout<<i*10<<endl;
    i++;

    if(i<=10){
        goto point;
    }
}