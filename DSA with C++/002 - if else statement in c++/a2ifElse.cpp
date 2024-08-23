#include<iostream>
using namespace std;
int main(){
    // if else grading system
    int percentage;
    cout<<"Enter your percentage: ";
    cin>>percentage;
    if(percentage>=75){
        cout<<"first class";
    }else if(percentage>=55){
        cout<<"second class";
    }else if(percentage>=35){
        cout<<"third class";
    }else{
        cout<<"fail";
    }

    
}