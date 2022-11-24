#include <iostream>
using namespace std;
int rev(int arr[],int size,int pos){
    int start =pos+1,end=size-1;
    while(start<=end){
       swap(arr[start],arr[end]);
        start=start+1;
        end=end-1;

    }
   
}
int printrev(int arr[],int size){
for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

}
}

    
int main() {
    int size,pos;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
   int arr[10];
   cout<<"Enter the array elements"<<endl;
   for(int i =0;i<size;i++){
    cin>>arr[i];
   }
  cout<<"enter the position"<<endl;
  cin>>pos;
   rev(arr,size,pos);
   printrev(arr,size);
    
  
    return 0;
}