#include<iostream>
using namespace std;

int main(){
  int marks[] = {23,56,89,48};

  int mathmarks[4];
  mathmarks[0]=32;
  mathmarks[1]=52;
  mathmarks[2]=99;
  mathmarks[3]=73;

  cout<<"These are math marks"<<endl;
  cout<<"mathmarks of student 1 : "<<mathmarks[0]<<endl;
  cout<<"mathmarks of student 2 : "<<mathmarks[1]<<endl;
  cout<<"mathmarks of student 3 : "<<mathmarks[2]<<endl;
  cout<<"mathmarks of student 4 : "<<mathmarks[3]<<endl<<endl;
  cout<<"These are marks"<<endl;
  cout<<"marks of student 1 : "<<marks[0]<<endl;
  cout<<"old marks of student 2 : "<<marks[1]<<endl;
  marks[1]=61;
  cout<<"new marks of student 2 : "<<marks[1]<<endl;
  cout<<"marks of student 3 : "<<marks[2]<<endl;
  cout<<"marks of student 4 : "<<marks[3]<<endl;
  return 0;
}