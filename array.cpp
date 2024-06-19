#include <iostream>
using namespace std;

// int main(){
//     int number[15]={1,2};
//     int num=14;
// for(int i=0;i<=num;i++){
//     number[1]=8;
//  cout<<number[i]<<" ";
// }
// }

// void update(int arr[], int n){
//     arr[0]=22;
//     cout<<"Inside the function "<<endl;
//      for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }



//     cout<<"Going Back To Main Function "<<endl;

// }



// int main(){
//     int arr[3]={1,23,3};
//     update(arr,3);
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }


// }


// int main(){
//     int n;
//     cin>>n;
    
//     int arr[n];
//     cout << "Enter the numbers: " << endl;
//     for(int i=1;i<=n;i++){
//         cin>>arr[i];
//     }
    
//     cout<<arr;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//        sum+=arr[i];
//     }
//    cout<<"Sum Of Enntered Numbers "<<sum<<endl;
// }


/// Reverse An Array 

// void reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }


// void prinarray(int arr[],int n){

//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//      cout<<endl;
// }

// int main(){
//     int arr[4]={22,33,44,55};
//     int brr[3]={1,2,3};

//     reverse(arr,4);
//     reverse(brr,3);
//     prinarray(arr,4);
//     prinarray(brr,3);
// }







// void reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

// }


// void reverse(int arr[],int size){
//     int start=2;
//     int end=size-1;
//  while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;

//  }
// }

// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[8]={10,120,20,20,11,40,90,30};
//     int size=8;
//     reverse(arr,size);
//     display(arr,size);}
//


// Merge 2 Sorted Arrayssssssssssssssssssssssssssssssssssssssssssssss


// void merge(int a[], int b[],int c[],int size){


// }



// int main(){
//     int arr1[5]={1,3,5,7,9};
//     int arr2[3]={2,4,6};

//     int arr3[8]={0};
//     int size=8;
//     merge(arr1,arr2,arr3,size);
// }


// Arayys movessssssssssss Zerooooooooooooooooooooo

// void ending(int arr[],int n){
//     int nonZeroIndex =0;
//     for(int j=0;j<n;j++){
//         if(arr[j]!=0){
//             swap(arr[j],arr[nonZeroIndex]);
//             nonZeroIndex++;
//         }

//     }
// }


//  void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[6]={0,10,0,12,0,11};
//     int size=6;
//     display(arr,size);
//     ending(arr,size);
//     display(arr,size);

// }


void ending(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }

}




 void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[11]={1,0,1,20,5,0,8,9,10,20,0};
    int Size=11;
    display(arr,Size);
    ending(arr,Size);
    display(arr,Size);

}