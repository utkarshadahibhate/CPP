#include<iostream>
using namespace std;

// Sum of n consecutive numbers using while loop
int main(){
    // int n, sum_con = 0;
    // cout<<"Enter a number"<<endl;
    // cin>>n;
    // while(n>=0){
    //     // cout<<n<<" ";
    //     sum_con += n;
    //     n--;
    // }
    // cout<<"\n"<<"The sum of the consecutive numbers : "<<sum_con<<endl;

// Sum of n consecutive numbers using for loop

// int sum_con1=0,user;
// cout<<"Enter you fav number : "<<endl;
// cin>>user;
// for(int b=0; b<=user; b++){
//     cout<<b<<" ";
//     sum_con1 += b;
// }
// cout<<"\n"<<"Sum of the consecutive numbers : "<<sum_con1<<endl;


// To print alphabets in matrix form
// int i=1,j;

// while(i<=4){
//     j=1;
//     while(j<=4){
//         cout<<" * ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// To print alphabets in matrix form

// int i=1,j;
// char letter = 'A';

// while(i<=4){
//     j=1;
//     while(j<=4){
//         cout<<letter<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
//     letter++;
// }
// A A A A 
// B B B B 
// C C C C 
// D D D D

// int i=1,j;
// char letter = 'A';

// while(i<=4){
//     j=1;
//     while(j<=4){
//         cout<<letter<<" ";
//         letter++;
//         j++;
//     }
//     cout<<endl;
//     i++;
    // letter++;
// }
// A B C D 
// E F G H 
// I J K L 
// M N O P

// int i=1,j;
// char letter = 'A';

// while(i<=10){
//     j=1;

//     if()
//     while(j<=i){
//         cout<<letter<<" ";
//         letter++;
//         j++;
//     }
//     cout<<endl;
//     i++;
//     // letter++;
// }


int i=1;
int j=1;
char letter = 'A';
while(i<=7){
    j=1;
    while(j<=i){
        if(letter<='Z'){
            cout<<letter<<" ";
            letter++;
            j++;
        }
        else{
            cout<<"_ ";
            letter++;
            j++;

        }
    }
    cout<<endl;
    i++;
}


}

// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
// P Q R S T U 
// V W X Y Z [ \ 

// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
// P Q R S T U 
// V W X Y Z [ \ 
// ] ^ _ ` a b c d 
// e f g h i j k l m 
// n o p q r s t u v w 

