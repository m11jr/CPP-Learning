#include <iostream>
#include <iomanip>

using namespace std; // if you do not use it you will need to write std:: before cout cin string vector and so

int main(){

/*
int resNum;
    std:: cout<<"Enter Reservation Number : ";
std:: cin>>resNum;
if(resNum==516){
std:: cout<<"Your Table is : " <<5<<endl;
}
*/
int age(10);
cout<<age<<endl;

int age2(12.9);
cout<<age2<<endl; // it will do type conversion so it will print to 12;


auto myName = "Alinur Mammadzada Codestar c++";
cout<<"Size Of myName is : "<< sizeof(myName)<<endl;




/*cout << endl;
cout << "size of char : "                   << sizeof(char) << endl << endl;

cout << "size of signed : "                 << sizeof(signed) << endl;
cout << "size of unsigned : "               << sizeof(unsigned) << endl << endl;

cout << "size of short : "                  << sizeof(short) << endl;
cout << "size of long : "                   << sizeof(long) << endl;
cout << "size of long long: "               << sizeof(long long) << endl << endl;

cout << "size of int : "                    << sizeof(int) << endl;
cout << "size of short int : "              << sizeof(short int) << endl;
cout << "size of long int : "               << sizeof(long int) << endl;
cout << "size of long long int : "          << sizeof(long long int) << endl << endl;

cout << "size of signed long int : "        << sizeof(signed long int) << endl;
cout << "size of unsigned long int : "      << sizeof(unsigned long int) << endl;
cout << "size of signed long long int : "   << sizeof(signed long long int) << endl;
cout << "size of unsigned long long int : " << sizeof(unsigned long long int) << endl << endl;

cout << "size of float : "                  << sizeof(float) << endl << endl;

cout << "size of double : "                 << sizeof(double) << endl;
cout << "size of long double : "            << sizeof(long double) << endl;

cout << "----------------------------------" << endl << endl; 
*/


unsigned int ui1=-5;


float number5(1.1234567890102030405f);   
cout<<number5<<endl;

double number6(1.1234567890102030405);   

cout<<setprecision(15);
cout<<"Double is : "<<number6<<endl;
}

