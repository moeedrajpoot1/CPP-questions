
#include <iostream>
using namespace std;

int maxNumber(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minNmber(int arr[],int size){ 
   int min=INT_MAX;
   for(int i=0;i<size;i++){
    if(arr[i]<min){
        min=arr[i];
    }
    return min;
   }
}

int main() {
  int size;
  cin>>size;
  int arr[100];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
   
   
   cout<<"The mAx Value is "<< maxNumber(arr,size)<<endl;
   cout<<"The Min Value Is "<<minNmber(arr,size)<<endl;
   
}