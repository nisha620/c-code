#include<iostream>
#include<string>
using namespace std;
int main(){
    int physics = 78 ;
    int biology= 89 ;
    int chemistry      = 95 ;
    int computer     =   87 ;
    int  hindi =    90 ;
    int percentage = (physics+biology+chemistry+computer+hindi)/5 ;
    switch (percentage>=90)
    {
    case 1: cout<< "your  grade is A" ;
        
        break;
        case 0:
        switch(percentage>=80) {
        case 1:    cout<< "grade b" ;
        break 
        ;
        }

    return 0 ;



    
    default:
        break;
    } 
}  