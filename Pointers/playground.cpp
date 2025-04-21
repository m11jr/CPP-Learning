#include <iostream>

using namespace std;

int main(){

   /* int b = 5;

   // cout << b << endl;   // equivalent of b is *(&b)
    //cout << &b << endl;
    //cout << *(&b) << endl;
    cout<<sizeof(&b)<<endl;
    cout<<(int)(&b);
*/
// int number = 22;   // stack
//     int *p_number = &number;

//     cout << "number:     " << number << endl;
//     cout << "&number:    " << &number << endl;
//     cout << "p_number:   " << p_number << endl;
//     cout << "*p_number:  " << *p_number << endl;

// int *p_number1;   // uninitialized pointer, contains junk address
// int number1 = 12;
// p_number1 = &number1;   // make it point to a valid address

// cout << "*p_number1: " << *p_number1 << endl;





int *pointer = nullptr;
    pointer = new int;

    *pointer = 77; 

    cout << pointer << endl;    //  ex: 0x7ff03af05b00  // memory adress of the heap
    cout << &pointer << endl;   //  ex: 0x7ff03af05f15  // memory adress of the pointer itself
    cout << *pointer << endl;   //  77, derefencing     // value that pointer will get from heap


    delete pointer;     // after releasing it, the pointer will contain a junk address
    pointer = nullptr;  // so it is good practice to initialize it to null

    cout << "pointer: " << pointer << endl;   // 0x0 - null address


}