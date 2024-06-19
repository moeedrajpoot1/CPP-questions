#include <iostream>
using namespace std;

// int power(){
//     int a,b;
//     cout<<"Enter a Fist Value";
//     cin>>a;
//     cout<<"Enter a Second  Value";
//     cin>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }

//     return ans;
    

// }

// int main(){
   
//    cout<<power();
// }


int odd(){
    int n;
    cout<<" Enter A Number ";
    cin>>n;
    if(n%2==0){
        cout<<"You entered a even Number "<<n;
    }
    else{
        cout<<"This Number is an Odd Number "<<n;
    }
}

int main(){
 cout<<odd();
}