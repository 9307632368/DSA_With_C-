//check whether first number is greater than second number or not
#include<iostream>
using namespace std;
int main(){
    int firstNumber,secondNumber;
    cout<<"Enter first number: ";
    cin>>firstNumber;
    cout<<"Enter second number: ";
    cin>>secondNumber;
    if(firstNumber>secondNumber){
        cout<<"the number "<<firstNumber <<" is greater than number "<<secondNumber;
    }else{
        cout<<"the number "<<firstNumber <<" is less than number "<<secondNumber;
    }
}