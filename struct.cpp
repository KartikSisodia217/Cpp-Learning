#include<iostream>
using namespace std;


struct student
{
  int rollNo;
  int marks;
  char grade;
};
  
union money // A union lets you store different data types in the same memory location, but only one of them can be used at a time.
{
  int rice; // int: 4 byte, char: 1 byte, float: 4 byte. if we used struct, we'd require 9 byte of data but with union we only need 4 byte of data.
  char car;
  float pounds;
};
  
int main(){
  struct student Kartik;
  Kartik.rollNo = 14;
  Kartik.marks = 90;
  Kartik.grade = 'a';

  cout<<"Kartik's roll no = "<<Kartik.rollNo<<endl;
  cout<<"Kartik's marks = "<<Kartik.marks<<endl;
  cout<<"Kartik's grade = "<<Kartik.grade<<endl;
  cout<<endl<<endl;

  union money m1;
  m1.rice = 34;
  m1.car = 'c';
  cout<<"cost of rice: " <<m1.rice<<endl;
  cout<<"car: "<<m1.car<<endl;


  enum meal{ breakfast, lunch, dinner};
  cout<<breakfast<<endl; 
  cout<<lunch<<endl;
  cout<<dinner<<endl;
  
  return 0;
}