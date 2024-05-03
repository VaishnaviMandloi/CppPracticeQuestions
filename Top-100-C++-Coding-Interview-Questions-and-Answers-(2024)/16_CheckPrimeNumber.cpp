#include <iostream>
using namespace std;

bool checkPrime(int num){
    
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    
    return true;
}

int main(){
    
    int num;
    cout<<"Enter a number to check it is prime or not : ";
    cin>>num;
    
    cout<<num<<((checkPrime(num))?" is a prime number":" is not a prime number");
    
    return 0 ;
}
