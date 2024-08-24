/*
a
b b 
c c c
d d d d 
e e e e e
*/

#include<iostream>
using namespace std;
int main(){
    for(char row='a';row<='e';row++){
        for(char col='a';col<=row;col++){
           cout<<row<<" ";
        }cout<<endl;
    }
}