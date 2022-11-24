#include<iostream>
using namespace std;
int binary(int arr[],int size,int key){
    int start = 0;
    int end =size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
return -1;
}

   
int main() {
    int size=10,key;
   int even[10]={2,4,6,8,10,12,14,16,18,20};
   int odd[10]={2,3,5,7,13,17,19,23,27};
   cout<<"Enter the key you want to search"<<endl;
   cin>>key;
   int index =  binary(odd,size,key);
    cout<<"Index of "<<key<<" = "<<index;
   

    return 0;
}