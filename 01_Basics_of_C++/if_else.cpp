#include<iostream>
using namespace std;

int main(){
    int package; 
    cout<<"Enter your salary package: "; 
    cin>>package; 

    if(package>10){
        cout<<"Accepted!!"<<endl; 
    }
    else{
        cout<<"Rejected!!"<<endl; 
    }
}