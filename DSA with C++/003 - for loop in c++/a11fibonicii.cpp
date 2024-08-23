// fibinicii series
#include<iostream>
using namespace std;
int main(){
    int last=0, previous=1,number,current;
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=1;i<number;i++){
        current=last+previous;
        last=previous;
        previous=current;
        cout<<current<<endl;
    }
    cout<<current;
}