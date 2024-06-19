#include <iostream>
using namespace std;
// Sum OF Numbers

// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;


//     }
//     cout<<sum<<endl;



// }


///   Fibonacci sequence Pichly 2 numbers Ka Sum Karta

// int main(){
//     int n;
//     cout<<"Enter Your number";
//     cin>>n;
//     int a=0;
//     int b=1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1;i<=n;i++){
//       int nextNumber=a+b;
//       cout<<nextNumber<<" ";
//       a=b;
//       b=nextNumber;
//     }
// }


/// Prime Number


// int main(){
//     int n;
//     cout<<"Enter A Number";
//     cin>>n;
//     bool isPrime=1;
// for(int i=2;i<n;i++){
//         if(n%i==0){
//           isPrime= 0 ;
//           break;
//         }
//     }
// if(isPrime==0){
//     cout<<"This is not a Prime Number "<<n<<endl;
// }
// else{
//     cout<<"This is  a Prime Number "<<n<<endl;
// }
// }


// int main(){
//     for (int i=0;i<=5;i++){
//         for(int j=0;j<=5;j++){
//             cout<<i<<" "<<j<<endl;
//         }
        
//     }
// }





// int main(){
//     int n;
//     cin>>n;
//     int product=1;
//     int sum=0;
//     while(n!=0){
//          int isDigit=n%10;
//          product=product*isDigit;
//          sum=sum+isDigit;
//          n=n/10;

//     }
//     int answer=product-sum;
//     cout<<answer;
// }


// int main() {
//     int num;
//     cin >> num;
//     int rev = 0;

//     while (num != 0) {
//         int lastDigit = num % 10;
//         rev = rev * 10 + lastDigit;
//         num = num / 10; // Update num by removing the last digit
//     }

//     cout << rev << endl;

//     return 0;
// }




int main(){
    int num=2;
    switch(num){
        case 1:cout <<"fisrt"<<endl;
            break;
        case 2:cout<<"second"<<endl;
        break;
        default:cout<<"It is a Default Case"<<endl;


    }
}












