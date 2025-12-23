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
  


  int age1;
  cout<<"Enter second persons age:";
  cin>>age1;
  switch (age1)
  {
    case 18:
    cout<<"You are 18";
    break;

    case 20:
    cout<<"you are 20";
    break;

    default :
    cout<<"no default case";
    break;
  }
  return 0;
}