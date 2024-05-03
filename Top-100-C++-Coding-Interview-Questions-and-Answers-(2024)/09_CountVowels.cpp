#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int vowel_count(string str){
    int count=0;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u'||
        str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    
    return count;
}

int main(){
    
    string str;
    
    cout<<"Enter a string to the total number of vowel in it : ";
    cin>>str;
    
    int count = vowel_count(str);
    
    cout<<count;
    
    return 0;
}
