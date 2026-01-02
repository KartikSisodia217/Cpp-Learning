#include<iostream>
using namespace std;

int add(int a , int b){
  cout<<"using func with 2 arguements"<<endl;
  return (a+b);
};
int add(int a , int b, int c){
  cout<<"using function with 3 arguements"<<endl;
  return (a+b+c);
};
//vol of a cylinder
int vol(double r , int h){
  return (3.14*r*r*h);
};
//vol of a rectngular cuboid
int vol(int l , int b, int h){
  return (l*b*h);
};
//vol of a cube
int vol(int a ){
  return (a*a*a);
};

int main(){
  cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
  cout<<"The sum of 3, 7 and 6 is "<<add(3,7,6)<<endl;
  cout<<"The volume of cylineder of radius 3 and height 6 is "<<vol(3,6)<<endl;
  cout<<"The volume of cuboid of sides 3, 7 and 6 is "<<vol(3,7,6)<<endl;
  cout<<"The volume of cube of side 3 is "<<vol(3)<<endl;
  return 0;
}