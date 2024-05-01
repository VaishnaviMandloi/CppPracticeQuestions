
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string toggle(string str){
    
    for(int i=0;str[i]!='\0';i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
    }
    
    return str;
}

int main(){
    
    string str;
    
    cout<<"Enter a string to toggle it : ";
    cin>>str;
    
    str = toggle(str);
    
    cout<<"Your toggled string : "<<str<<endl;
    
    return 0;
}
