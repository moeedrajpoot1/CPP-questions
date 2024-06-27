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

//


int check(char word[],int n){
    int start=0;
    int end=n-1;
while(start<=end){
    if(word[start++]==word[end--]){
        return 1;
    }
    else{
        return 0;
    }
}
}






int count(char word[]){
    int letters=0;
    for(int i=0;word[i]!='\0';i++){
       letters++;
    }
    return letters;
}



int main(){
//     char word[20];
//     cout<<"Enter A Word ";
//     cin>>word;
//     int counting=count(word);
    
// if(check(word,counting)==1){
//     cout<<"Its A Palindrom word "<<word;
// }
// else{
//     cout<<"Its not  A Palindrom word ";
// }
    // int arr[] ={1,2,3,4};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;

}