#include<iostream>
using namespace std;


struct student
{
  int rollNo;
  int marks;
  char grade;
};

int main(){
  struct student Kartik;
  Kartik.rollNo = 14;
  Kartik.marks = 90;
  Kartik.grade = 'a';

  cout<<"Kartik's roll no = "<<Kartik.rollNo<<endl;
  cout<<"Kartik's marks = "<<Kartik.marks<<endl;
  cout<<"Kartik's grade = "<<Kartik.grade<<endl;
  
  return 0;
}