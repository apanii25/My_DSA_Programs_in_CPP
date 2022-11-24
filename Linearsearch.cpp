#include<iostream>
using namespace std;
bool search(int arr[],int size,int ele){
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            return true;
        }
    }
    
  return false;
}

int main() {
    int size,ele;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
   int arr[100];
   cout<<"Enter the array elements"<<endl;
   for(int i =0;i<size;i++){
    cin>>arr[i];
   }
   cout<<"Enter the Element want to search "<<endl;
   cin>>ele;
   bool result =search(arr,size,ele);
   if(result){
         cout<<"Element is present "<<endl;    
   }
   else{
    cout<<"Element is absent "<<endl;
   }
   
    return 0;
}