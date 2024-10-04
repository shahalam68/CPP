#include <iostream>
using namespace std;
int main(){
   float eng;
   float sci;
   float math;
   cout<<"input eng marks:";
   cin>>eng;
   cout<< "input sci marks:";
   cin>>sci;
   cout<< "input math marks: ";
   cin>>math;
   float avg = (eng + sci + math)/ 3;
   cout<<" your avarag marks is:" <<avg<<endl;
    return 0; 
} 