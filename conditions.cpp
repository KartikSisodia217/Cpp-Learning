#include<iostream>
using namespace std;

int main(){
  int age;
  cout<<"Enter your age:";
  cin>>age;
  cout<<endl;

  if(age<18){
    cout<<"You are underage!"<<endl;
  }
  else{
    cout<<"You are an adult!"<<endl;
  }
  return 0;
}