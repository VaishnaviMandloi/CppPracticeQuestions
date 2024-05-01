
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a,b,c;
    
    cout<<"Enter the three numbers to find the greatest of them: ";
    
    cin>>a>>b>>c;
    
    if(a>=b && a>=c){
        cout<<a<<" is the greatest of all three numbers."<<endl;
    }
    else if(b>=a && b>=c){
        cout<<b<<" is the greatest of all three numbers."<<endl;
    }
    else{
        cout<<c<<" is the greatest of all three numbers."<<endl;
    }
    
}
