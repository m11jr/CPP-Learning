#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a=2, b=3,c=4;

   // a=a+1;
    //a+=1;
    a++;

// b=b-1;
//b-=1;
b--;

cout<<a<<endl;
cout<<b<<endl;

int d=50;

d%=7;
cout<<"D : "<<d<<endl;

//int mod0=16%0;  it is undefined

//cout<<mod0<<endl;


//Associativity (Connecting a few calculations together)
int as1=1,as2=4;
as2+=as1-=6 ; //first we find what is as1-=6, after find the whole equation
//1-6=-5   then as2=4+(-5)=-1
cout<<"The answer is : " <<as2<<endl;



//Prefix PostFix

cout<<"----------------------------------------------------------"<<endl;
int post1=5,post2=6;

post1++; post2--;

cout<<"post1 : "<<post1<<endl;
cout<<"post2 : "<<post2<<endl;
//postfix increments later


int pre1=5,pre2=6;
++pre1; --pre2;

cout<<"pre1 : "<<pre1<<endl;
cout<<"pre2 : "<<pre2<<endl; 
//prefix increments befire


// They will both give the same answer in this case

//but there is a case now

cout<<post1++<<endl;
cout<<post1<<endl;


int f, g;
f=20;
// f is 20 first then used as it. Then you see f incremented. So before the second +f f is 21. and it will be used like that. the it is incremented.
g=f++ + f++;

//g:41  f:22
cout<<"G : "<<g<<endl;
cout<<"F : "<<f<<endl;

cout<<"---------------------"<<endl;

int h, j;
h=5;
// f is 20 first then used as it. Then you see f incremented. So before the second +f f is 21. and it will be used like that. the it is incremented.
j=++h + h++;

//j:12  h:7  but the console will give j:13 but it is because pf compilator error.
cout<<"J : "<<j<<endl;
cout<<"H : "<<h<<endl;


cout<<"---------------------"<<endl;


int k,l;
k=5;
l=--k+k--;
cout<<"k : "<<k<<endl;
cout<<"L : "<<l<<endl;


cout<<"---------------------"<<endl;

cout<<"---------------------"<<endl;

cout<<"---------------------"<<endl;


system("cls");

int z=20,x=15;

cout<< "z : " <<z <<"   -----------   x : "<<x<<endl;
cout<< std::boolalpha;

cout << "(a < b):  " << (z < x) << endl;
cout << "(a > b):  " << (z > x) << endl;
cout << "(a == b): " << (z == x) << endl;
cout << "(a != b): " << (z != x) << endl;
cout << "(a <= b): " << (z <= x) << endl;    // (a < b) || (a == b)
cout << "(a >= b): " << (z >= x) << endl;
/*
        cout << "a < b:  " << a < b << endl;   // ERROR

        This statement will give us a compile-time error!
        
        Since the '<<' operator has higher precedence rules, 
        the compiler will first think that we are printing the 'a' variable, 
        and then see this smaller operand '<' again and generate an error.

        So to avoid it use parentheses: cout << "(a < b):  " << (a < b) << endl;
    */





}