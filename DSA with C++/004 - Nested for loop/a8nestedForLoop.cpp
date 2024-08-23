/*print a b c d e 
        a b c d e 
        a b c d e
        a b c d e
        a b c d e
*/

#include<iostream>
using namespace std;
int main(){
    for(char row='a';row<='e';row++){
        for(char col='a';col<='e';col++){
            cout<<col<<" ";
        }cout<<endl;
    }
}