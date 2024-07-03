// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


// // Merge 2 Sorted arrays 

// void merge(int arr[], int size, int arr1[], int size1, int arr3[]) {
//     int i = 0, j = 0, k = 0;

//     // Traverse both arrays
//     while (i < size && j < size1) {
//         if (arr[i] < arr1[j]) {
//             arr3[k++] = arr[i++];
//         } else {
//             arr3[k++] = arr1[j++];
//         }
//     }

//     // Store remaining elements of the first array
//     while (i < size) {
//         arr3[k++] = arr[i++];
//     }

//     // Store remaining elements of the second array
//     while (j < size1) {
//         arr3[k++] = arr1[j++];
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int arr1[] = {6, 7, 8, 9, 10, 11, 12};
//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int arr3[size + size1];

//     merge(arr, size, arr1, size1, arr3);

//     // Print the merged array
//     for (int i = 0; i < size + size1; i++) {
//         std::cout << arr3[i] << " ";
//     }
  
// }

// question no 2 Palindrom




// int checkPalindrom(char arr[], int size) {
//     int start = 0;
//     int end = size - 1;
//     while (start < end) {
//         if (arr[start] == arr[end]) {
//             return 1;
//         }
//         start++;
//         end--;
//     }
//     return 0;
// }

// int getLength(char arr[]) {
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++) {
//         count++;
//     }
//     return count;
// }

// int main() {
//     char arr[20];
//     cin >> arr;
//     int len = getLength(arr);
//     if (checkPalindrom(arr, len) == 1) {
//         cout << "It's a Palindrome" << endl;
//     } else {
//         cout << "It is not a Palindrome" << endl;
//     }
//     return 0;
// }


// int CheckDuplicates(int arr[],int size){
    
// for(int i=0;i<size;i++){
//     for(int j=0;j<size;j++){
//         if(i!=j && arr[i]==arr[j]){
//            return arr[i];
//             break;
//         }
//     }
// }
//   }
    
   


// int main() {
//     int even[8]={2,1,2,2,3,4,6,7};
//     int evenSize=8;
   
//     cout<< CheckDuplicates(even,evenSize)<<endl;

  
// }

// Traverse And reeverse
// void reverse(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;

//     }
// }

// int printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[4]={1,2,3,4};
//     int size=4;
//     reverse(arr,size);
//     printArray(arr,size);
    
// }



//




// void reverse(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<end){
//        if(arr[start]==)

//     }
// }

// int printArray(int num){
//     for(int i=0;i<num;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[3]={1,0,1};
//     int size=3;
//     reverse(arr,size);
//     printArray(num);
    
// }



/// Move Zeroo
// void  moveZero(int arr[],int size){
//    int nonZero=0;
//    for(int j=0;j<size;j++){
//        if(arr[j]!=0){
//            swap(arr[j],arr[nonZero]);
//            nonZero++;
           
//        }
//    }
    
// }
// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main() {
//    int arr[6]={1,0,2,1,0,3};
//    int size=6;
//    moveZero(arr,size);
//    printarray(arr,size);
// }


