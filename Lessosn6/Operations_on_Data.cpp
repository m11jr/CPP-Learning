#include <iostream>
#include <iomanip>
#include <cmath>

// documentation iomanip: https://en.cppreference.com/w/cpp/io/manip
// documentation cmath:   https://en.cppreference.com/w/cpp/header/cmath

using namespace std;

/*
    Operations on Data

    1. Introduction on Data operations
    2. Basic Operations
    3. Compound Assignment Operators
    4. Precedence and Associativity
    5. Prefix/Postfix Increment & Decrement
    6. Relational Operators
    7. Logical Operators
    8. Output formatting
    9. Math Functions
   10. Weird Integral Types
*/

int main() {

    /*
        2. Division and Modulus operations (Basic Operations).
    */

    // Division
    cout << 123 / 1 << endl;    // 123
    cout << 123 / 10 << endl;   // 12
    cout << 123 / 100 << endl;  // 1

    cout << endl;

    // Modulus
    cout << 123 % 1 << endl;    // because 123 % 1   = 123 * 1 + 0
    cout << 123 % 10 << endl;   // because 123 % 10  = 12 * 10 + 3
    cout << 123 % 100 << endl;  // bacause 123 % 100 = 1 * 100 + 23

    cout << "----------------------------" << endl << endl;


    /*
        3. Compound Assignment Operators
    */

    int a = 2, b = 3, c = 4;

    // a == 3
    a = a + 1;   // equivalent a += 1, or a++
    
    // 12
    a = a * 4;   // equivalent a *= 4

    // 12 * (3 + 4)
    a = a * (b + c);   // a *= b + c
    
    // 84 + 1 = 85
    a++;    // a = a + 1 equivalent to a += 1

    cout << a << endl;   // 85

    a %= 11;   // equivalent a = a % 11;

    cout << a << endl;   // 8   

    cout << "----------------------------" << endl << endl;




    /*
        4. Precedence and Associativity.
    */

    int a = 6, b = 3, c(8), d(9), e(3), f(2), g(5);

    // Precedence
    int result = a + b * c - d / e - f + g;     // 30

    cout << "result: " << result << endl;

    // parenthesis
    result = (a + b) * c - d / e - f + g;

    cout << "result (): " << result << endl;    // 72

    // Associativity
    a = 1;
    b = 4;

    // a -= 6 is evaluated first
    b += a -= 6;    // b = b + a, a = a - 6

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "----------------------------" << endl << endl;


    /*
        5. Prefix/Postfix Increment & Decrement.
    */

    int value = 5;

    value = value + 1;   // 6
    value = value - 1;   // 5

    value = 5;

    // Increment with postfix (it computes after)
    cout << "value++: " << value++ << endl;   // 5
    cout << "value  : " << value << endl;     // 6

    value = 5;

    // Decrement with postfix (it computes after)
    cout << "value--: " << value-- << endl;   // 5
    cout << "value  : " << value << endl;     // 4

    value = 5;

    // Increment with prefix (it computes before)
    cout << "++value: " << ++value << endl;   // 6
    cout << "--value: " << --value << endl;   // 5

    cout << "----------------------------" << endl << endl;



    /*
        6. Relational Operators
    */

    int a = 10;
    int b = 15;

    cout << std::boolalpha;

    cout << "a = " << a << ", b = " << b << endl;

    cout << "(a < b):  " << (a < b) << endl;
    cout << "(a > b):  " << (a > b) << endl;
    cout << "(a == b): " << (a == b) << endl;
    cout << "(a != b): " << (a != b) << endl;
    cout << "(a <= b): " << (a <= b) << endl;    // (a < b) || (a == b)
    cout << "(a >= b): " << (a >= b) << endl;

    /*
        cout << "a < b:  " << a < b << endl;   // ERROR

        This statement will give us a compile-time error!
        
        Since the '<<' operator has higher precedence rules, 
        the compiler will first think that we are printing the 'a' variable, 
        and then see this smaller operand '<' again and generate an error.

        So to avoid it use parentheses: cout << "(a < b):  " << (a < b) << endl;
    */

    cout << "store comparison result and use it later" << endl;

    bool result = (a == b);

    cout << a << " == " << b << " is " << result << endl;

    cout << "----------------------------" << endl << endl;


    /*
        6. Logical Operators
    */

    bool a = true;
    bool b = false;
    bool c = true;

    cout << std::boolalpha;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << "!a: " << !a << endl;
    cout << "!b: " << !b << endl;
    cout << "!c: " << !c << endl;

    cout << "a && b:      " << (a && b) << endl;
    cout << "a && c:      " << (a && c) << endl;
    cout << "a && b && c: " << (a && b && c) << endl;

    cout << "a || b:      " << (a || b) << endl;
    cout << "a || c:      " << (a || c) << endl;
    cout << "a || b || c: " << (a || b || c) << endl;

    // Use cases
    int d = 25;
    int e = 20;
    int f = 11;

    cout << "(d > e)  && (d > f):  " << ((d > e) && (d > f)) << endl;
    cout << "(d == e) || (e <= f): " << ((d == e) || (e <= f)) << endl;
    cout << "(d < e)  || (d > f):  " << ((d < e) || (d > f)) << endl;
    cout << "(f > e)  || (d < f):  " << ((f > e) || (d < f)) << endl;

    cout << "(d > f)  && (f <= d): " << ((d > f) && (f <= d)) << endl;
    cout << "(d > e)  && (d <= f): " << ((d > e) && (d <= f)) << endl;

    cout << "(!a)  && (d == e):    " << ((!a) && (d == e)) << endl;

    cout << "----------------------------" << endl << endl;


    /*
        8. Output Formatting
    */

    int width = 10;

    cout << "Hello" << std::setw(20) << "World" << endl;
    cout << "Hello" << std::setw(width) << "World" << endl;

    cout << std::setfill('_');
    cout << "Hello" << std::setw(20) << "World" << endl;
    cout << "Hello" << std::setw(30) << "World" << endl;

    // Different number systems: hec, dec, oct
    // Note: this number systems only works for integral types (natural numbers or integer numbers)

    int number = 12233;

    cout << "number in hex: " << std::hex << number << endl;
    cout << "number in dec: " << std::dec << number << endl;
    cout << "number in oct: " << std::oct << number << endl;

    double pi = 3.1415926535897932384626433832795;

    cout << "pi: " << pi << endl;

    cout << std::scientific;
    cout << "pi: " << pi << endl;

    cout << std::setprecision(50);
    cout << "pi: " << pi << endl;

    cout << "----------------------------" << endl << endl;


    /*
        10. Weird Integral Types
    */

    short int a = 10;
    short int b = 20;

    char c1 = 'c';
    char c2 = 42;

    cout << "sizeof(a): " << sizeof(a) << endl;
    cout << "sizeof(b): " << sizeof(b) << endl;

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    auto result1 = a + b;
    auto result2 = c1 + c2;

    cout << "result1: " << result1 << endl;
    cout << "result2: " << result2 << endl;

    cout << "sizeof(result1): " << sizeof(result1) << endl;
    cout << "sizeof(result2): " << sizeof(result2) << endl;

    cout << "----------------------------" << endl << endl;


    return 0;
}