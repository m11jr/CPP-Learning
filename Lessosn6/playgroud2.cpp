#include <iostream>
#include <iomanip>

using namespace std;

int main(){
/*
int o=5;
int p=3;

//cout<<a>b<<endl; it will give an error if you delete the comment




bool a = true;
bool b = false;
bool c = true;

cout << std::boolalpha;

cout << "a: " << a << endl;
cout << "b: " << b << endl;
cout << "c: " << c << endl;
cout<<"Not a : "<<!a<<endl;
cout<<"Not b: "<<!b<<endl;
cout<<"Not c : "<<!c<<endl;

cout<<(!!true)<<endl; 


cout << "a && b:      " << (a && b) << endl;
cout << "a && c:      " << (a && c) << endl;
cout << "a && b && c: " << (a && b && c) << endl;

cout << "a || b:      " << (a || b) << endl;
cout << "a || c:      " << (a || c) << endl;
cout << "a || b || c: " << (a || b || c) << endl;

//888888888888888888888888888888888888888888888888888888888888


int d = 25;
int e = 20;
int f = 11;

cout << "(d > e)  && (d > f):  " << ((d > e) && (d > f)) << endl;
cout << "(d == e) || (e <= f): " << ((d == e) || (e <= f)) << endl;
cout << "(d < e)  || (d > f):  " << ((d < e) || (d > f)) << endl;
cout << "(f > e)  || (d < f):  " << ((f > e) || (d < f)) << endl;
cout<<"--------------------------------"<<endl;
cout << "(d > f)  && (f <= d): " << ((d > f) && (f <= d)) << endl;
cout << "(d > e)  && (d <= f): " << ((d > e) && (d <= f)) << endl;
cout << "(!a)  && (d == e):    " << ((!a) && (d == e)) << endl;

cout << "----------------------------" << endl << endl;


//-----------------------------------------------------------------------

int width = 10;

cout << "Hello" << std::setw(20) << "World" << endl;
cout << "Hello" << std::setw(width) << "World" << endl;

cout<<"-------------------------"<<endl;  // it gives you a command to put something between the words in white space
cout << std::setfill('_');
    cout << "Hello g" << std::setw(20) << "World" << endl;
    cout << "Hello" << std::setw(30) << "World" << endl;


    cout<<"--------------------------------"<<endl;

    int number = 12233;

    cout << "number in hex: " << std::hex << number << endl;
    cout << "number in dec: " << std::dec << number << endl;
    cout << "number in oct: " << std::oct << number << endl;


    cout<<"--------------------------------"<<endl;
    double pi = 3.1415926535897932384626433832795;

    cout << "pi: " << pi << endl;

    cout << std::scientific; // more scientific coding, give me me more precise
    cout << "pi: " << pi << endl;

    cout << std::setprecision(50);
    cout << "pi: " << pi << endl;

   
    cout << "----------------------------" << endl;
   
   */
    system("cls");

    short int p = 10;
    short int u = 20;

    char c1 = 'c';
    char c2 = 42; // it will go to ASCII table and take the current symbol assigned to number 42

    cout<<"Size OF p : "<<sizeof(p)<<endl;
    
    cout<<"Size OF u : "<<sizeof(u)<<endl;

    cout<<"c1 : "<<c1<<endl;
    cout<<"c2 : "<<c2<<endl;

    auto result1 = p+u; //int
    auto result2 =c1+c2; //it will convert them into their ASCII code use them as int value
    cout<<"Result 1 is :"<<result1<<endl;
    cout<<"Size Result 1 is :"<<sizeof(result1)<<endl; // when we use auto result1 compilator understand it as int a and int b. Not as short int a or short int B. so That as int is 4 byte the result will be 4 byte 

    cout<<"Result 2 is :"<<result2<<endl; 
    cout<<"Size Result 2 is :"<<sizeof(result2)<<endl; // This will be same as result1. compilator behaves them as ASCII int. So int is 4byte so answer is 4 byte


}