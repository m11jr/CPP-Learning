#include <iostream>
using namespace std;

int main(){

    // int c = 99;

    // auto func = [&c]() {
    //     cout << "Inner value : " << c << ", &inner : " << &c << endl;
    // };

    // for (size_t i(0); i < 5; ++i) {
    //     cout << "Outer value : " << c << ", &outer : " << &c << endl;
    //     func();
    //     ++c;
    // }


    int a = 42;
    double b = 3.14;
    
    auto lambda = [&]() {
        a++;
        cout << "&a = " << &a << ", &b = " << &b << endl;
    };
    
    lambda();

    cout << "a = " << a << endl;



}