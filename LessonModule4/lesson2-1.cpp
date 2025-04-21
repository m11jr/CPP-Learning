#include <iostream>

using namespace std;

void Hello() {
    cout <<"Hello World"<<endl;
 };

 int addNumbers(int a,int b){
    return a+b;
 }

int main(){

cout<<"Welcome Point" << endl;
Hello();

cout<<addNumbers(5,10)<<endl;

cout<<addNumbers(5,10)+addNumbers(20,-10)<<endl;


int age;
string name;

cout<<"Enter Your Name and then Age"<<endl;
cin>>name>>age;
cout<<"Hello "<<name<<". Your age is "<<age<<endl;  
/* Your can both put one by one. Or you can put space between the input elements*/



}