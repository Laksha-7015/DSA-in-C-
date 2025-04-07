#include<iostream>
using namespace std;

int main(){
    int a; 
    cout<<"Enter the first number: "; 
    cin>>a;

    int b; 
    cout<<"Enter the second number: "; 
    cin>>b; 

    if(a>b){
        cout<<"Greatest number is: "<<a<<endl;
    }
    else{
        cout<<"Greatest number is: "<<b<<endl; 
    }
}