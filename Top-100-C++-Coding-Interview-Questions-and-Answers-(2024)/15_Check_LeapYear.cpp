#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void leapYear(int year){
    if(year%400==0){
        cout<<year<<" is a leap year";
        return;
    }
    
    if(year%100==0){
        cout<<year<<" is not a leap year";
        return;
    }
    
    if(year%4==0){
        cout<<year<<" is a leap year";
        return;
    }

    cout<<year<<" is not a leap year";

}

int main(){
    
    int year;
    
    cout<<"Enter a year to chcek it is a leap year or not : ";
    cin>>year;
    
    leapYear(year);
    
    return 0;
}
