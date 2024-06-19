#include <iostream>
using namespace std;



int binarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end){
       if(arr[mid]==key){
        return mid;
       }

       if(key>arr[mid]){
        start=mid+1;
       }
       else{
        end=mid-1;
       }
       mid=start+(end-start)/2;
    }
    return -1;
}



int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={5,10,15,20,25};

    int index=binarySearch(even,6,7);
    int index1=binarySearch(even,6,7);
    cout<<index;
    cout<<index1;

}