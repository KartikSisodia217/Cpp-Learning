#include<iostream>
using namespace std;

int factorial(int n){
  if(n<=1){
    return 1;
  }
  else{
    return n * factorial(n-1);
  }
};

int main(){
  //Factorial of a number
  int a;
  cout<<"Enter the value of a: ";
  cin>>a;
  cout<<"The factorial of a is: "<<factorial(a);
  return 0;
}