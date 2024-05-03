#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

string remove_vowels(string str){
    
    int j=0;
    
    for(int i=0; i<str.size();i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
        str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            str[j++] = str[i];
        }
    }    
    
    while(j<str.size()){
        str[j++]='\0';
    }
    
    return str;
}

int main(){
    
    string str;
    
    cout<<"Enter the string from which you want to remove cowels : ";
    cin>>str;
    
    cout<<"String after remove vowels : "<<remove_vowels(str)<<endl;
    cout<<str;
    
    return 0;
}
