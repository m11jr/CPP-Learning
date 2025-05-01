#include <iostream>
using namespace std;

int main(){

    // int z=5;
    // int &r = z;

    // cout<<r<<endl;
    // cout<<z<<endl;

    // z =10;
    // cout<<r<<endl;
    // cout<<z<<endl;

    // r=15;

    // cout<<r<<endl;
    // cout<<z<<endl;
//Const Pointers;

int x=5;
int *const p = &x; // so after that we cannot change our pointer;

//cout<<*p<<endl;
// int y=5;
// p = &y; //this will gives as an error
// x=15; // I change the value of the x
// cout<<*p<<endl;
// *p=15; // I can change the value from the pointer
// cout<<*p<<endl;

// So basically I can't change the pointer's valie, but still can change the value which is pointer points to



// int y=5;
// const int *ptr = &y;
// int a=25;
// //*ptr=15; i can't do that
// // a=30; I can do that
// ptr=&a;
// cout<<*ptr;
//     // but now I change the pointer memoru adress



    int u=45;
    const int *const ptr1 = &u;
    // u=55; // stil I can change the value from itself
     //*ptr1=55; // i cannot change the value from pointer;
     int i=55;
     ptr1=&i; // I cannot give new value to the pointer;


     // if before data type - I can change the memory adress, but I cannot change the value from pointer
     // if after data type - I cannot change the memory adress, pointer have a const pointed variable, but I can change the value of that variable
     


}