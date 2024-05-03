#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string removeSpace(string str){
    
    string res="";
    
    for(char c : str){
        if(c!=' '){
            res +=c; 
        }
    }
    return res;
}

int main(){
    
    //string str="I am Vaishnavi Mandloi";
    //char str[100]={};
    string str;
    
    cout<<"Enter string from which you want to remove spaces : ";
    //cin>>str;
    //cin.getline(str,100);
    getline(cin,str);
    
    cout<<"String after remove spaces : "<<removeSpace(str)<<endl;
    cout<<"String before removing space : "<<str;
    
    return 0;
}
