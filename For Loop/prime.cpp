#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;

        }
    }
    if(prime==1){
        cout<<"Prime number";
    }else{
        cout<<"Not a prime number";
    }


    return 0;
}