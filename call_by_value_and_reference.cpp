#include<iostream>
using namespace std;

void swap(int a, int b){ 
    int temp = a;           
    a = b;               
    b = temp;             
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ 
    int temp = *a;          
    *a = *b;             
    *b = temp;           
}

void swapReferenceVar(int &a, int &b){    
    int temp = a;       
    a = b;               
    b = temp;            
}


int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y);   //This will swap a and b using pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    


    int m = 3, n = 4;
    cout<<"The value of m is "<<m<<" and the value of n is "<<n<<endl;
    swapPointer(&m, &n);   //This will swap a and b using pointer reference
    cout<<"The value of m is "<<m<<" and the value of n is "<<n<<endl; 
   

    
    int p=8, q=12;
    cout<<"The value of p is "<<p<<" and the value of q is "<<q<<endl;
    swapReferenceVar(p, q);   //phis will swap a and bqusing pqinter reference
    cout<<"The value of p is "<<p<<" and the value of q is "<<q<<endl; 
    return 0;
}