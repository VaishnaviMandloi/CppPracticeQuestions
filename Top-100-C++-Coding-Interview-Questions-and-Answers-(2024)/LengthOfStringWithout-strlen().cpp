
#include <iostream>
#include <cstring>
#include<bits/stdc++.h>

using namespace std;

void lenStr(string str){
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    cout<<length;
}

int main(){
    
    string str;
    
    cout<<"Enter a string which length you want to find : ";
    cin>>str;
    
    lenStr(str);
    
    return 0;
}
