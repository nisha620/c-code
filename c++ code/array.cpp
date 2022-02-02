#include<iostream>
#include<string>
using namespace std;
int main(){
    string birds[6] = {"peacock", "goose", "owl" ,"dove", "falcon","eagal" } ;
    int z= sizeof(birds)/sizeof(birds[0]);
   for (int i = 0; i < z; i++)
   {
       cout<<i<<birds[i]<<endl;

   }
   
    return 0;
}