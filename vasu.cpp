#include<iostream>
using namespace std;

   void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
 int uniquearr(int arr[],int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
        cout<<ans<<" ";
    }
    cout<<endl;
    for(int i=1;i<size;i++){
        ans=ans^i;
        cout<<ans<<" ";
    }
    cout<<ans<<endl;
    return ans;
 }
 

int main() {
    int size=5;
    
   int arr[]={2,1,3,4,2};
   int arr2[50];
   
    cout<<"unique elememts"<<uniquearr(arr,size);

    return 0;
}