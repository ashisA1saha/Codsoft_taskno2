
//                              Task - 2 

// Develop a   calculator program that performs basics arithmetic operations such as
// addition,subtraction,multiplication, and division.
// Allow the user to input two numbers and choose an operation to perform .



#include<iostream>
using namespace std ;
int main(){
    int a ,b ; ;
    char ch ;
    cout<<"Enter your first number : ";
    cin>>a ;
    cout<<"Enter your Second number : " ;
    cin>>b ;
    cout<<"Enter the operation to perform : " ;
    cin>>ch ;
    if(ch=='+'){
        cout<<"According to user input the output is : "<<a+b ;
    }
    if(ch=='-'){
        cout<<"According to user input the output is : "<<a-b ;
    }
    if(ch=='*'){
        cout<<"According to user input the output is : "<<a*b ;
    }
    if(ch=='/'){
        cout<<"According to user input the output is : "<<a/b ;
    }
}