//sum of square of n natural number

#include<iostream>
using namespace std;
int main(){
   int sum=0;
   int number;
   cout<<"Enter a number";
   cin>>number;
   for(int i=1;i<=number;i++){
      sum=sum+i*i;
   }
   cout<<"sum of square of n natural numbers is "<<sum;
}