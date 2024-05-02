
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int num;
    
    cout<<"Enter a number to check whether it is negative and positive : ";
    cin>>num;
    
    if(num>0){
        cout<<"Positive number"<<endl;
    }
    else if(num==0){
        cout<<"Zero"<<endl;
    }
    else{
        cout<<"Negative Number"<<endl;
    }
}
