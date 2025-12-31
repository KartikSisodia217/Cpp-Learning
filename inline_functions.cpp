#include<iostream>
using namespace std;

inline int product (int x,int y){
  //static int c = 0; // this executes only once 
   // NOTE : NOT A GOOD PRACTICE TO USE INLINE WITH STATIC VARIABLES.
  // c = c+1; // Next time the function will run, it will remember this value. 
  return x*y;
}


int main(){
  int a,b;
  cout<<"Enter the value of a and b"<<endl;
  cout<<"a: ";
  cin>>a;
  cout<<"b: ";
  cin>>b;
  cout<<endl;
 
  cout<<"The product of a and b is: "<<product(a,b)<<endl; // the same function is executed multiple times., you can convert it to inline function as it directly shows the output instead of copying the variables and doing all the steps on them everytime
  cout<<"The product of a and b is: "<<product(a,b)<<endl; // try to make small functions (1-2 lines) inline functions
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  cout<<"The product of a and b is: "<<product(a,b)<<endl;
  return 0;
}