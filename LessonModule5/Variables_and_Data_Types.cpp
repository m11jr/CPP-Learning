#include <iostream>
#include <iomanip>    // iomanip is a library that is used to manipulate the output of C++ program

/*
    What we will learn:

    1.  Variables and data types Introduction
    2.  Number Systems
    3.  Integer types: Decimals and Integers
    4.  Integer Modifiers
    5.  Fractional Numbers
    6.  Booleans
    7.  Characters And Text
    8.  Auto
    9.  Assignments

*/

using namespace std;

int main() {

    /*  
        1. What is a variable? 

        A variable is a named memory used to store specific data types.

        Rules for naming variables:

        1. A variable name must only contain alphabets, digits, and underscore(_).
        2. A variable name must start with an alphabet or an underscore only. It cannot start with a digit.
        3. Names cannot contain whitespaces or special characters like !, #, %, etc.
        4. A variable name must not be any reserved word or keyword.
        5. in C++ names are case sensitive ("myVar" and "myvar" are different variables)
    */

    /*
        Generally, we have data types like int, float, double, char, bool, void, and auto.
        double and float are used to represent fractional numbers.
        char is used to represent characters.
        bool stores two possible states true or false.
        void is a typeless type, void is used in functions that we'll learn in the next chapters.
        The auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used.
    */

    // variable can contain a random garbage value. WARNING
    int age;

    cout << "age: " << age << endl;   // will have garbage value

    cout << "----------------------------------" << endl << endl;


    // Assignment initialization
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count; 

    // Functional variable initialization
    int number1(10);
    int number2 (5);
    int number3(2.9);   // information is lost (we will get a warning, number3 will be 2), this is called an implicit conversion
    int number4(number1 + number2 + number3);

    cout << "implicit conversion: " << number4 << endl;
    cout << "sizeof int: " << sizeof(number4) << " bytes" << endl;

    //  Generall form to declaring and initializing variable is: "typename variable_name = initializer_value;"

    cout << "----------------------------------" << endl << endl;



    /*
        2. Number Systems

        1. Decimal
        2. Binary
        3. Octal
        4. Hexadecimal
    */

    int decimal = 15;
    int octal = 017;
    int hex = 0x0f;
    int binary = 0b00001111;

    cout << "Decimal: "     << decimal << endl;
    cout << "Octal"         << octal << endl;
    cout << "Hexadecimal: " << hex << endl;
    cout << "Binary: "      << binary << endl;

    auto number = "sdsds";

    cout << sizeof(number) << endl;



    /*  
        4. Integer Modifiers

        Integers by default have signed modifiers that allow us to store positive and negative integers.
        If we only want to store positive integers, we can use the unsigned modifier. 
        If we put a negative number with the unsigned modifier, then we get a compile-time error.

        It doesn't matter if our integer modifier is signed or unsigned, it still occupies 4 bytes in our memory.

        The range of values that can be stored for integers using the signed and unsigned methods.
        unsigned: [0, 2^n - 1]
        signed:   [-2^(n - 1), 2^(n - 1) - 1]

        unsigned int: [0, 4294967295]
        signed int:   [-2147483648, 2147483647]
    */

    int x1 = -2147483648;
    signed int x2 = 2147483647;
    unsigned int x3 = 4294967295;
    //  int x1 = -2147483649; exceeds the limit and will cause an error 
    //  int x1 = 2147483648; exceeds the limit and will cause an error 
    //  signed int x1 = 2147483648; exceeds the limit and will cause an error 
    //  unsigned int x3 = 4294967296; exceeds the limit and will cause an error 


    /*
        We can also mark our integer types with modifiers such as short or long.

        Several of the basic types can be modified using one or more of these type modifiers −
        1. signed
        2. unsigned
        3. short
        4. long
    */

    cout << endl;
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



    /*
        5. Fractional Numbers

        Fractional numbers are also called floating-point types.
    */

    cout << std::setprecision(20);

    float number5(1.1234567890102030405f);   // Precision 7

    double number6(1.1234567890102030405);    // Precision 15
    double number_(1.1234567890102030405f);   // will beave like a float number with precision 7 (because of suffix "f")

    double number7(1.924e8);    //  e8   means multiply by 10^8   (it is scientific notation)
    double number8(3.498e-11);  //  e-11 means muliply by 1/10^11 i.e. exp(-11) (it is scientific notation)

    float  number9  = 192400023.0f;   // 192400023 exceed float limit which is 7
    double number10 = 192400023.0;    // will not exceed as because double precision is 15

    cout << "number5: "  << number5 << endl;    // 1.1234568357467651367     
    cout << "number6: "  << number6 << endl;    // 1.1234567890102029608 
    cout << "number_: "  << number_ << endl;    // 1.1234568357467651367     
    cout << "number7: "  << number7 << endl;    // 192400000  
    cout << "number8: "  << number8 << endl;    // 1.9239999999999999605e-11 
    cout << "number9: "  << number9 << endl;    // 192400016 
    cout << "number10: " << number10 << endl;   // 192400023

    cout << "----------------------------------" << endl << endl; 



    /*
        6. Booleans

        Very often, in programming, you will need a data type that can only have one of two values, like:

            YES / NO
            ON / OFF
            TRUE / FALSE

        For this, C++ has a bool data type, which can take the values true (1) or false (0).
    */

    bool light = true;

    if (light == true) {
        cout << "Light " << light << endl;
    } else  {       //  else if (light != true) OR, else if (light == false) 
        cout << "Light " << light << endl;
    }

    if (light) {
        cout << "sizeof bool: "  << sizeof(bool)  << " byte" << endl;
        cout << "sizeof light: " << sizeof(light) << " byte" << endl;
    }
    
    cout << std::boolalpha;    // forces the output format to true/false
    
    cout << "light: "  << light  << endl;   // true
    cout << "!light: " << !light << endl;   // false    

    cout << "----------------------------------" << endl << endl; 



    /*
        7. Character Types

        The char data type is used to store a single character. 
        The character must be surrounded by single quotes, like 'A' or 'c':
    */

    char c1('H'), c2('e');
    char c3('l');
    char c4('l');
    char c5('o');

    cout << c1;
    cout << c2;
    cout << c3;
    cout << c4;
    cout << c5;

    char v1 = 87, v2 = 111, v3 = 114, v4 = 108, v5 = 100, v6 = 33;

    cout << endl << v1 << v2 << v3 << v4 << v5 << v6 << endl;

    // One byte in memory: 2^8 = 256 - different values (0 ~ 255)
    char value = 89;    // ASCII character code for 'Y'

    cout << "sizeof(char): "  << sizeof(char) << endl;
    cout << "sizeof(value): " << sizeof(value) << endl;

    cout << "----------------------------------" << endl << endl;


    /*
        8. Auto

        The auto keyword specifies that the type of the variable that is being declared 
        will be automatically deducted from its initializer.
        In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime. 
        Good use of auto is to avoid long initializations when creating iterators for containers.   
    */

    auto var1 = 12;
    auto var2 = 13.0;
    auto var3 = 14.0f;    // float, suffix 'f'
    auto var4 = 15.0l;    // long double, suffix 'l'
    auto var5 = 'e';

    // int modifier suffixes
    auto var6 = 123u;     // unsigned integer, suffix 'u'
    auto var7 = 123ul;    // unsigned long integer, suffix 'ul'
    auto var8 = 123ll;    // long long integer, suffix 'll'

    // Let's see how correctly auto deduced the types of our variables
    cout << "type id: " << typeid(var1).name() << ", var1 occupies: " << sizeof(var1) << " bytes" << endl;
    cout << "type id: " << typeid(var2).name() << ", var2 occupies: " << sizeof(var2) << " bytes" << endl;
    cout << "type id: " << typeid(var3).name() << ", var3 occupies: " << sizeof(var3) << " bytes" << endl;
    cout << "type id: " << typeid(var4).name() << ", var4 occupies: " << sizeof(var4) << " bytes" << endl;
    cout << "type id: " << typeid(var5).name() << ", var5 occupies: " << sizeof(var5) << " bytes" << endl;
    cout << "type id: " << typeid(var6).name() << ", var6 occupies: " << sizeof(var6) << " bytes" << endl;
    cout << "type id: " << typeid(var7).name() << ", var7 occupies: " << sizeof(var7) << " bytes" << endl;
    cout << "type id: " << typeid(var8).name() << ", var8 occupies: " << sizeof(var8) << " bytes" << endl;

    cout << "----------------------------------" << endl << endl;


    /*
        9. Assigments
    */

    int var1;   // declare variable var1
    var1 = 12;  // assign 12 to variable var1

    bool state = false;    // declare and initialize
    auto a(true);          // declare and initialize
    a = false;   // reassign


    // Careful about auto assigments
    auto var2 = 123u;   // declare and initialize with type deduction

    var2 = -32;    // Assign negative number. (WRONG)

    cout << var2 << endl;   // will print garbage!
    
    cout << "----------------------------------" << endl << endl;

}