#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<12 || age>65){
        cout<<"Yes, eligible for discount."<<endl;
    }

    else{
        cout<<"No, eligible for discount."<<endl;
    }
}