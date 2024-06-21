#include <iostream>
using namespace std;

void rotate(int arr[],int size){
       int arr1= (size+2)%size;
       cout<<arr1<<" This is";
}
 void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8]={0,1,2,3,4,5,6,7};
    int size=8;
    display(arr,size);
    rotate(arr,size);

}