// to check whether number is prime or not

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    if(num<2){
       cout<<"not prime" ;
       return 0;
    }else{
        for(int i=2;i<num;i++){
            if(num%2==0){
            cout<<"not prime number";
            return 0;
        }
    }       
     cout<<"prime number "<<endl;

}
}
    