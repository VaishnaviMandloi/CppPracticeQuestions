#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

bool palindrome(long num){
    
    string str= to_string(num);
    
    int len = str.size();
    
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            return false;
        }
        num/=10;
    }
    
    return true;
}

bool palindrome_num(long num){
    
    long number = num, rev=0;
    while(number!=0){
        rev=rev*10 +number%10;
        number=number/10;
    }
    if(num==rev){
        return true;
    }
    
    return false;
}

int main(){
    
    long num;
    
    cout<<"Enter the number to check it is palindrome or not : ";
    cin>>num;
    
    cout<<num<<(palindrome(num)?" is a palindrome number":" is not a palindrome number"))<<endl;
    cout<<num<<(palindrome_num(num)?" is a palindrome number":" is not a palindrome number");
    
    return 0;
}
