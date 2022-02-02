#include <iostream>
#include <string>
using namespace std;
void print(string name="laxmi")
{
    cout<<name;
}
int main()
{
    print("fagu");
    cout<<endl;
    print(); 
    return 0;
}