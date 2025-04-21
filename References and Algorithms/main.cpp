#include <iostream>

using namespace std;

/*
    References

    1. Introduction to References
    2. Declaring and using references
    3. Comparing pointers and references
    4. References and const
    5. Applications of References
    6. Time Complexity

*/


int main() {

    /*
        1. Introduction to References

        A reference variable is an alias, that is, another name for an already existing variable. 
        Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable.
    */ 

    

    /*
        2. Declaring and using reference
    */ 

    int x(33);
    double y(55);

    // References
    int &ref_int_data = x;
    double &ref_double_data = y;

    // Prind data out
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "&x: " << &x << endl;
    cout << "&y: " << &y << endl;

    cout << "===================================" << endl;

    cout << "ref_int_data: "     << ref_int_data << endl;
    cout << "ref_double_data: "  << ref_double_data << endl;
    cout << "&ref_int_data: "    << &ref_int_data << endl;
    cout << "&ref_double_data: " << &ref_double_data << endl << endl << endl;

    // Change data
    x = 101;
    y = 67.2;

    // Prind data out
	cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "&x: " << &x << endl;
    cout << "&y: " << &y << endl;

    cout << "===================================" << endl;

    cout << "ref_int_data: "     << ref_int_data << endl;
    cout << "ref_double_data: "  << ref_double_data << endl;
    cout << "&ref_int_data: "    << &ref_int_data << endl;
    cout << "&ref_double_data: " << &ref_double_data << endl;

    // Change referential data
    ref_int_data = 1002;
    ref_double_data = 3.14;

    // Prind data out
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "&x: " << &x << endl;
    cout << "&y: " << &y << endl;

    cout << "===================================" << endl;

    cout << "ref_int_data: "     << ref_int_data << endl;
    cout << "ref_double_data: "  << ref_double_data << endl;
    cout << "&ref_int_data: "    << &ref_int_data << endl;
    cout << "&ref_double_data: " << &ref_double_data << endl;




    /*
        3. Comparing pointers and references

        Follow the lecture

        source: https://www.geeksforgeeks.org/pointers-vs-references-cpp/
    */

    /*
        References are somewhat like const pointers.

        References behave like constant pointers, 
        but they have a much friendlier syntax as they do not require dereferencing to read and write through referenced data.
    */

    int x = 5;
    int *const ptr = &x;

    ptr = nullptr;  // Error




    /*
        4. References and const
    */

    // No const reference
    int age = 27;
    int &ref_age = age;

    cout << "age:     " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    // Can modify original variable thorugh reference
    ref_age = 30;

    cout << endl << "after cange: " << endl << endl;
    cout << "age:     " << age << endl;
    cout << "ref_age: " << ref_age << endl;


    // Const reference
    int age = 27;
    const int &ref_age = age;   // note: const here only applies to the reference, not the variable being referenced

    cout << "age:     " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    // Can't modify original variable thorugh reference
    ref_age++;   // modify through reference


    // Simulating reference behavior with pointers
    int age = 27;
    int *const pointerAge = &age;   // we only have constant pointer

    pointerAge = nullptr;   // Error

    // simulating const reference
    const int *const pAge = &age;    // we have both constant value and constant pointer

    *pAge = 24;   // Error



    /*
        5. Applications of References

        Follow the lecture

        source: https://www.geeksforgeeks.org/references-in-c/
    */

    // some practice code




    /*
        6. Time Complexity (!Important)

        Follow the lecture

        source: https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/
    */

}