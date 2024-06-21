#include <iostream>
using namespace std;

// Counting the lettersn of your name
// int getLength(char name[]){
//     int count=0;
//    for(int i=0;name[i]!='\0';i++){
     

//      count++;  
//     }
//     return count;
// }





// int main(){
//     char name[20];
//     cout<<" Enter Your Name:-";
//     cin>>name;
//     cout<<"This is a length of your name "<<getLength(name);
// }




/// Reverse the String


// void revrse(char name[], int n){

//         int start=0;
//         int end=n-1;
//         while(start<end){
//             swap(name[start++],name[end--]);
//     }    
   

// }
// int getLength(char name[]){
//     int count=0;
//    for(int i=0;name[i]!='\0';i++){
     

//      count++;  
//     }
//     return count;
// }



// int main(){
//     char name[20];
//     cout<<"Enter Your Name Jann ";
//     cin>> name;
//     int len=getLength(name);
//     revrse(name,len);
//     cout<<"Your Name is ";
//     cout<<name;
    
// }


///               Palindrome string      ///

// int revrse(char name[], int n){

//         int start=0;
//         int end=n-1;
//         while(start<end){
//            if(name[start++]==name[end--]){
//             return 1;
//            }
//            else{
//             return 0;
//            }
//     }    
   

// }
// int getLength(char name[]){
//     int count=0;
//    for(int i=0;name[i]!='\0';i++){
     

//      count++;  
//     }
//     return count;
// }



// int main(){
//     char name[20];
//     cout<<" Check Word ";
//     cin>> name;
//     int len=getLength(name);
//    if(revrse(name,len)==1){
//     cout<<"Its A Palindrom Word ";
//    }
//    else{
//     cout<<"It is not A Palindrom Word Try again ";
//    }
// }

int count(char n[]){
    int letters=0;
    for(int i=0;n[i]!='\0';i++){
     letters++;
    }
    return letters;
}

void reverse(char n[],int name){
    int start=0;
    int end=name-1;
    while(start<=end){
        swap(n[start++],n[end--]);
    }

}


int main(){
  char n[20];
  cout<<"Enter Your Name:-";
  cin>>n;
  int name= count(n);
  reverse(n,name );
  cout<<"Your Name is ";
  cout<<n;
 

}