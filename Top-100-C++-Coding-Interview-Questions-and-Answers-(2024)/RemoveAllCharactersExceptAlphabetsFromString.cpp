
#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

string only_alpha(string str){
    string res="";
    
    for(int i=0;i<str.size();i++){
        if(isalpha(str[i])){
            res +=str[i];
        }
    }
    return res;
}

int main(){
    
    string str;
    
    cout<<"Enter a string in which you want to keep only Alphabets and remove other characters : ";
    cin>>str;
    
    cout<<"String after removing All Characters Except Alphabets : "<<only_alpha(str)<<endl;
    
    cout<<"original string : "<<str;
    
    return 0;
}
