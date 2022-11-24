#include<iostream>
using namespace std;
int firstpos(int arr[],int size,int key){
    int start = 0;
    int end =size-1;
    int ans=-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            end=mid-1;
            
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
return ans;
}
int lastpos(int arr[],int size,int key){
    int start = 0;
    int end =size-1;
    int ans=-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            start=mid+1;
            
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
return ans;
}

   
int main() {
    int size=10,key;
   int even[10]={2,4,6,8,10,10,10,10,18,18};
  
   cout<<"Enter the key you want to search last and first position"<<endl;
   cin>>key;
    
    cout<<"first Index of "<<key<<" = "<<firstpos(even,size,key)<<endl;
    
    cout<<"Last Index of "<<key<<" = "<<lastpos(even,size,key);
   

    return 0;
}