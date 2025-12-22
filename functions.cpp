#include <iostream>
using namespace std;

float sum(float x, float y){
  return x+y;
}
float diff(float x, float y){
  return x-y;
}
float prod(float x, float y){
  return x*y;
}
float quo(float x, float y){
  return x/y;
}

int main(){
  float a=4, b=3;
  cout<< "The sum of the numbers " <<a << " and " << b<< " = " << sum(a,b);
  cout<< "\nThe difference of the numbers " <<a << " and " << b<< " = " << diff(a,b);
  cout<< " \nThe product of the numbers " <<a << " and " << b<< " = " << prod(a,b);
  cout<< " \nThe division of the numbers " <<a << " and " << b<< " = " << quo(a,b);
  
  return 0;
}