#include <iostream>
using namespace std;


void revers(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}

int  printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    printArr(arr,size);
    revers(arr,size);
    printArr(arr,size);
}