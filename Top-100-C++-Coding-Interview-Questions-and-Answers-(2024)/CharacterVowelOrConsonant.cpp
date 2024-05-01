
#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

void is_Vowle(char c){
    if(isalpha(c)){
        if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u' || c=='A'|| c=='E' || c=='I' || c=='O' || c=='U'){
            cout<<c<<" is a vowle."<<endl;
        }
        else{
            cout<<c<<" is a consonant."<<endl;
        }
    }
    else{
        cout<<c<<" is not a character."<<endl;
    }
}

int main(){
    
    char c;
    
    cout<<"Enter a character to check wether it is a vowle or consonant : ";
    cin>>c;
    
    is_Vowle(c);
    
    return 0;
}
