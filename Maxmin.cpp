#include <iostream>
using namespace std;
int min(int arr[],int size){
    int min = INT8_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
         
    }
    return min;
}
int max(int arr[],int size){
    int max = INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
         
    }
    return max;
}

int main() {
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
   int arr[100];
   cout<<"Enter the array elements"<<endl;
   for(int i =0;i<size;i++){
    cin>>arr[i];
   }
   cout<<"maximum value: "<<max(arr,size)<<endl;
   cout<<"minimum value: "<<min(arr,size)<<endl;
    return 0;
}