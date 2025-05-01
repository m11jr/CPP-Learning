#include <iostream>
using namespace std;

int main(){
    // Const reference
    int age = 27;
    const int &ref_age = age;   // note: const here only applies to the reference, not the variable being referenced

    cout << "age:     " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    // Can't modify original variable thorugh reference
  //  ref_age++;   // modify through reference
    age=30;
    cout << "age:     " << age << endl;
    cout << "ref_age: " << ref_age << endl;

}