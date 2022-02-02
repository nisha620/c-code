#include<iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"input the value of a ";
    cin>>a;
    cout<<"input the value of b ";
    cin>>b;
    cout<<"input the operator to perform c ";
    cin>>c;
    switch(c){
        case '*':cout<<"product"<<a*b;
        
        break;
        case '+':cout<<a+b;
        break;
    }
    return 0;
}