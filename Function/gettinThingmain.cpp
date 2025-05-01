#include <iostream>
#include <string>

using namespace std;

/*
    Getting Things out of functions

    1. Introduction to getting things out of functions
    2. Input and output parameters
    3. Returning from functions by value
*/


/*
    2.1

    Since our "output" parameter (non-constant) reference, 
    the changes we make inside the function will be visible outside the function.
*/
void max_str(const string &input1, const string &input2, string &output) {
    if (input1 > input2) {
        output = input1;
    } else {
        output = input2;
    }
}

/*
    2.2

    You noticed that our inputs(input1, input2) are no longer references.
    Because we do not really mind copying fundamental types in C++.
    They are small in memory so copying them is really cheap.
    But the "output" parameter must be passed by reference
    because we want to use it as an output parameter.
*/
void max_int(int input1, int input2, int &output) {
    if (input1 > input2) {
        output = input1;
    } else {
        output = input2;
    }
}

/*
    2.3

    Some option is to  pass "output" as a pointer instead of reference.
*/
void max_double(double input1, double input2, double *output) {
    if (input1 > input2) {
        *output = input1;
    } else {
        *output = input2;
    }
}



/*
    3.1
*/
int sum(int a, int b) {
    int res = a + b;
    cout << "Inside function, &res: " << &res << endl;   // &res: 0x7ff7b8863374

    return res;
}

/*
    3.2
*/
string add_string(string str1, string str2) {
    string result = str1 + str2;

    // Will print the memory address converted to decimal from hexadecimal
    cout << "Inside function &result:      " << (long int)(&result) << endl;    

    return result;
}



int main() {

    /*
        1. Introduction to getting things out of functions
    */ 

    /*
        Let's recall what it means const reference.

        This means that we cannot change the reference variable 
        and can only use it as an alias for an already existing variable.
    */
    int x = 5;
    const int &y = x;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    x = 15;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    cout << "=======================================================" << endl;




    /*
        2. Input and output parameters
    */

    string output;
    string input1("Alabama");
    string input2("Oklahoma");

    /*
        You notice that it is not going to be using a return mechanism 
        but instead we will grab the result in our "output" variable.
    */
    max_str(input1, input2, output);

    cout << "maximum string: " << output << endl;


    int out_int;
    int in1(45);
    int in2(23);

    max_int(in1, in2, out_int);

    cout << "max int: " << out_int << endl;


    double out_double;
    double in_double1(45.8);
    double in_double2(6.9);

    max_double(in_double1, in_double2, &out_double);

    cout << "max double: " << out_double << endl;

    /*
        Summarize: 

        Input and output function parameters:

        1. Output parameters must be passed in such a way 
        that you can change the arguments within the function. 
        Options are passed by reference or pointer. 
        References are preferred in C++ (why?).

        2. Input parameters must not be changed inside the function. 
        The function really need to get input(read) from the arguments (why?). 
        You enforce modification constraints with the const keyword. 
        Parameters are passed by a constant reference, passed by a pointer to a constant, 
        or even passed by a constant pointer to a constant (what are their differences?).
    */

    cout << "=======================================================" << endl;




    /*
        3. Input and output parameters
    */

    int x(5);
    int y(9);

    int result = sum(x, y);

    // The memory addresses for the "res" variable and for "result" are different
    cout << "Outside, &result:     " << &result << endl;   // &result: 0x7ff7b8863394
    cout << result << endl;


    string hello = "Hello ";
    string world = "World!";

    string result_str = add_string(hello, world);

    // The memory addresses for the "result" variable and for "result_str" are the same. 
    // Why? (hint: The string object itself is stored on the stack but it points to memory that is on the heap.)
    cout << "Outside function &result_str: " << (long int)(&result_str) << endl;

    cout << result_str << endl;
    

    cout << "=======================================================" << endl;


}

