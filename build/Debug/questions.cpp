#include <iostream>
using namespace std;

// Maximum And Minimu In arraysssssssssssssssssssssssssssssssss

// int min(int num[],int size){
//     int minv=INT_MAX;
//    for(int i=0;i<size;i++){
//     if(num[i]<minv){
//         minv=num[i];}}
//    return minv;
// }


// int getMax(int num[],int size){
//     int max=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(num[i]>max){
//             max=num[i];
//         }
//     }
//     return max;

// }



// int main(){

// int size;
// cin>>size;
// int num[100];
// // taking an array
// for (int i=0;i<size;i++){
//     cin>>num[i];
// }

// cout<<"Get Max Value is "<<getMax(num,size)<<endl;
// cout<<"The Min Value is "<< min(num,size)<<endl;

// }



/// Linear Search


// bool search(int arr[], int size, int key){
//   for(int i=0;i<size;i++){
//     if(arr[i]==key){
//      return  1;
//     }
//   }
//   return 0;
// }
// int main(){
//     int arr[10]={2,3,4,5,5,0,51,3,44,6};
//     int size=10;
//     int key;
//     cin>>key;
//    bool found= search(arr,size,key);
//    if( found ){
//     cout<<"Key Is Present"<<endl;
//    }
//    else{
//     cout<<" Key Is NoT found "<<endl;
//    }
// }


/// Reverse An Array

// void reverse(int arr[], int size){
//   int start=0;
//   int end=size-1;
//   while(start<=end){
//     swap(arr[start++],arr[end--]);
//   }
// }

// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[5]={2,11,33,77,9};
//     int arr1[5]={1,2,3,4,5};
//     int size=5;
//     reverse(arr,size);
//      reverse(arr1,size);
//     printarray(arr,size);
//      printarray(arr1,size);

// }


// int reverse(char name[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         if(name[start++]==name[end--]){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
  
// }


// int getLength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// //  Swapppp alternate     
// int main(){
//     char name[20];
//     cout<<" Check Word ";
//     cin>> name;
//     int len=getLength(name);
//     int found=reverse(name,len);
//     if(found==1){
//         cout<<"Word is Palindrome";
//     }
//     else{
//         cout<<"Number is not palindrom ";
//     }

   
// }











// bool reverse(char name[],int leng){
//  int start=0;
//  int end=leng-1;
//  while(start<=end){
//     if(name[start++]==name[end--]){
//         return 1;
//     }
//     else{
//         return 0;
//     }
//  }
// }




// int  lenghtis(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }



// int main(){
//     char name[20];
//     cin>>name;
//     int leng=lenghtis(name);
//    if( reverse(name,leng)==1){
//     cout<<"It is Palindrom ";
//    }
//    else{
//     cout<<'it is not palindrom ';
//    }

// }







