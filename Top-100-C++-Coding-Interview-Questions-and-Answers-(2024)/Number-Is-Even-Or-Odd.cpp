
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool is_Even(int num){
    if(num%2==0){
        return 1;
    }
    
    return 0;
}

int main(){
    int num;
    
    cout<<"Enter a number to check it is even or odd : ";
    cin>>num;
    
    if(is_Even(num)){
        cout<<num<<" is a even number."<<endl;
    }
    else{
        cout<<num<<" is an odd number."<<endl;
    }
    
    return 0;
}
