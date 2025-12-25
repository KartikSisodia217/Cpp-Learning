#include<iostream>
using namespace std;

int main(){
  int a = 3;
  int* b = &a;
  cout<<"adress of a is "<<&a<<endl;
  cout<<"adress of a is "<<b<<endl;
  cout<<"The value at adress b is "<<*b<<endl<<endl;

  int**c = &b;
  cout<<"adress of b is "<<&b<<endl;
  cout<<"adress of b is "<<c<<endl;
  cout<<"The value at adress c is "<<*c<<endl;
  cout<<"The value at adress (value at adress c) is "<<**c<<endl;
  return 0;
}