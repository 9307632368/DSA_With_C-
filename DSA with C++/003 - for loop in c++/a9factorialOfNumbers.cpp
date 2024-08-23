// factorial of n numbers
#include<iostream>
using namespace std;
int main(){
    int mul=1,number;
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=1;i<=number;i++){
        mul=mul*i;
    }
    cout<<mul;
}