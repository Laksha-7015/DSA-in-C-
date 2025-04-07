#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the value of n: "; 
    cin>>n; 

    for(int i = 4; i <= n; i = i + 4){
        cout<<i<<" "; 
    }
}