#include <iostream>

using namespace std;

int sum(int num){
    int sum=0;
    
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    
    return sum;
}

int main(){
    
    int num;
    
    cout<<"Enter the natural number upto which you want to find sum : ";
    cin>>num;
    cout<<"Sum of "<<num<<" natural numbers are "<<sum(num);
    
    return 0;
}
