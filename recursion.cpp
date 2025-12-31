#include<iostream>
using namespace std;

int factorial(int n){
  if(n<=1){
    return 1;
  }
  
  return n * factorial(n-1);
  
};

int fib(int n){
  if(n<3){
    return n-1;
  }
  return fib(n-2)+fib(n-1);
};

int main(){
  //Factorial of a number
  int a,b;
  cout<<"Enter the value of a: ";
  cin>>a;
  cout<<"The factorial of "<<a<<" is: "<<factorial(a)<<endl;
  cout<<"Enter the value of b: ";
  cin>>b;
  cout<<"The fibonacci number at position "<<b<<" is: "<<fib(b)<<endl;
  return 0;
}