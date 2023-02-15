#include <iostream>
#include<vector>
using namespace std;

int primenum(int n){
    int cnt =0;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for (int i=2;i<n;i++){
        if(prime[i]){
            cnt++;
            
            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;


            }

        }

    }
    for (int p = 2; p < n; p++){
        if (prime[p])
            cout << p << " ";
}

    return cnt;


}
int main(){
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    cout<<"count of prime numbers = "<<primenum(num);
}


