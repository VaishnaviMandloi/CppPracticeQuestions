
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void ascii(char c){
    cout<<"ASCII value of '"<<c<<"' is "<<int(c)<<endl;
}

int main(){
    
    char c;
    
    cout<<"Enter the number which ASCII valur you wants to find : ";
    cin>>c;
    
    ascii(c);
    
    return 0;
}
