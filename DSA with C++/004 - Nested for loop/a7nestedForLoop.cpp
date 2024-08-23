//print a a a a a
//      b b b b b 
//      c c c c c
//      d d d d d

#include<iostream>
using namespace std;
int main(){
    for(char row='a';row<='e';row++){
        for(char col='a';col<='e';col++){
            cout<<row<<" ";
        }cout<<endl;
    }
}