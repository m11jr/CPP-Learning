#include <iostream>
#include "compare.h"   // Preprocessor

using namespace std;

/*
    Functions

    1. The One Definition Rule
    2. First Hand on C++ Functions
    3. Function Declaration and Function Definitions
    4. Multiple Files - Compilation Model Revisited
    5. Pass by value
    6. Passing By Pointer Vs Passing By Reference
*/



// 2.1 - Functions that takes nothing and returns nothing
void sayHello() {
    cout << "Hello there" << endl;
}

// 2.2 - Function that takes multiple parameters and returns the result of the computation
void enterAge(unsigned int age) {
    if (age > 10) {
        cout << "You are " << age << " years old." << endl;
    } 
    else if (age == 0) {
        cout << "You are not born yet?" << endl;
    } 
    else {
        cout << "Sorry you are too young." << endl;
    }

    return;   // it is valid because void returns nothing

    cout << "The next to print" << endl;
}

// 2.3 - Function that takes multiple parameters and return the computed result
int max_1(int a, int b) {
    if (a > b) 
        return a;
    else    // what if a == b?
        return b;
}

// 2.4 - Parameters passed this way are scoped localy in the function.
// What we have inside the function are actually COPIES of the arguments passed to the function
double increment_multiply(double a, double b) {

    cout << "Inside function, before change: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    double result = (++a) * (b++);

    cout << "Inside function, after increment: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return result;   // return result
}



// 3.1)  Function declaration, prototype
int min(int a, int b);

// 3.2)  Note that in a header or function declaration, the header doesn't care about the variable name.
int inc_mult(int, int);



// 5.1)  Function definition to swap the values.
void swap(int x, int y) {
   int temp;

   temp = x;    /* save the value of x */
   x = y;       /* put y into x */
   y = temp;    /* put x into y */
  
   return;
}
/*
    The x, y and temp variables inside the swap function will disappear outside the swap function.
    (they will be deleted from stack memory)
*/



// 6.1) C++ program to swap two numbers using pass by pointer
void pointerSwap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

// 6.2) C++ program to swap two numbers using pass by reference
void referenceSwap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}



int main() {

    /*
        1. The One Definition Rule
    */ 

    // Variable : Declaration and definition
    double weight;
    double weight;   // error: redefinition of 'weight'

    // Same for functions
    double add(double a, double b) {
        return a + b;
    }
    // error: redefinition of 'add'
    double add(double a, double b) {
        return a + b;
    }

    // Same for structures and classes
    struct Person {
        string name;
        string surname;
        int age;
    };
    // error: error: redefinition of 'Person' struct Person { ...
    struct Person {
        string name;
        string surname;
        int age;
    };

    cout << "=======================================================" << endl;



    /*
        2. First Hand on C++ Functions

        Functions offer several benefits in programming, including:

        1. Reusability: Functions can be used multiple times within a program or in different programs, 
        reducing redundancy and improving code efficiency.

        2. Code organization: Functions enable programmers to break down large, 
        complex programs into smaller, more manageable units, making the code easier to read, understand, and maintain.

        3. Modularity: Functions can be developed independently of other parts of the program, 
        making it easier to debug, test, and modify them without affecting the rest of the program.

        4. Encapsulation: Functions can encapsulate a particular behavior or functionality, 
        making it easier to isolate and fix errors that occur within that specific function.

        5. Abstraction: Functions can abstract away implementation details, 
        providing a simpler interface to the rest of the program, and improving code readability and maintainability.

        6. Parameterization: Functions can take inputs and produce outputs, 
        making them versatile and customizable to a wide range of use cases.


        Some variations of functions!

        // 1. takes nothing and doing noting
        void empty() {
        }

        // 2. takes nothing and doing something and returns noting
        void sayHello() {
            cout << "Hello ";
            cout << "World" << endl;

            // some code logic..
        }

        // 3. takes someting and doing something and returns nothing
        void say(string str) {
            cout << str << endl;
        }

        // 4. takes nothing and returns something
        int giveFive() {
            return 5;
        }

        // 5. takes somethings and returns something (can not be "something's")
        bool weird(int a, int b, string str) {
            if (str == "do it") {
                if (a == b) 
                    return true;
                else
                    return false;    
            } else {
                return false;
            }
        }
    */

    // Print values (string, int, float, ...)
    cout << "Hello " << 16 << " - " << (44.0 / 4.1) << " and etc..." << endl;

    sayHello();   // Hello there

    int x = 33;

    // Print variable
    cout << x << ", x*x: " << x*x << endl << endl;

    // Use functions
    enterAge(15);   // You are 15 years old.
    enterAge(4);    // Sorry you are too young.
    enterAge(0);    // You are not born yet?

    cout << endl;

    for (int i = 0; i < 20; i++) {
        enterAge(i);
    }


    // Calling max
    int result = max_1(10, 20);   // arguments

    cout << "max: " << result << endl;
    cout << "max_1(12, 14): " << max_1(12, 14) << endl;

    int x = 44;
    int y = 22;

    result = max_1(x, y);   // result == 44


    double h(3.00);
    double i(4.00);
    
    cout << "Outside function, before sending variables: " << endl;
    cout << "h: " << h << endl;   // 3.00
    cout << "i: " << i << endl;   // 4.00

    double inrement_muliply_result = increment_multiply(h, i);

    cout << "inrement_muliply_result: " << inrement_muliply_result << endl;

    cout << "Outside function, after sending variables: " << endl;
    cout << "h: " << h << endl;   // 3.00
    cout << "i: " << i << endl;   // 4.00

    cout << "=======================================================" << endl;
    


    /*
        3. Function Declaration and Function Definitions

        A function declaration tells the compiler about the name of the function, 
        the return type of the function, and the number and types of parameters that the function accepts.
        A function declaration typically appears at the top of a source file, before the function is used.

        A function definition, on the other hand, provides the actual implementation of the function. 
        It includes the code that executes when the function is called. 
        A function definition typically appears after the declaration, either in the same source file or in a separate file.
    */ 

    cout << min(-10, -12) << endl;
    cout << inc_mult(-10, -12) << endl; 

    cout << "=======================================================" << endl;



    /*
        4. Multiple Files - Compilation Model Revisited

        The same function implementation can't show up in the global namespace more than once!

        The preprocessors are the directives, which give instructions to the compiler 
        to preprocess the information before actual compilation starts.

        All preprocessor directives begin with #. 

        You already have seen a #include directive in all the examples. 
        This macro is used to include a header file into the source file.
    */

    cout << MAX(-4, -5) << endl;   // -4
    cout << MIN(-4, -5) << endl;   // -5

    cout << "=======================================================" << endl;



    /*
        5. Pass by value

        The call-by-value method of passing arguments to a function copies the actual value of an argument
        into the formal parameter of the function. 
        In this case, changes made to the parameter inside the function have no effect on the argument.

        When functions goes out of scope the local copies is going to die!

        By default, C++ uses call-by-value to pass arguments. 
        In general, this means that code within a function cannot alter the arguments used to call the function.
    */

    // local variable declaration:
    int a = 100;
    int b = 200;
 
    cout << "Before swap, value of a: " << a << endl;
    cout << "Before swap, value of b: " << b << endl;
 
    // calling a function to swap the values.
    swap(a, b);
 
    cout << "After swap, value of a: " << a << endl;
    cout << "After swap, value of b: " << b << endl;

    cout << "=======================================================" << endl;



    /*
        6. Passing By Pointer Vs Passing By Reference

        Follow the lecture

        Soruce: https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-cpp/
    */

    // Passing By Pointer
    int a = 45, b = 35;
    
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
  
    pointerSwap(&a, &b);
  
    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";


    // Passing By Reference
    int a = 45, b = 35;
    
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
  
    referenceSwap(a, b);
  
    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";

}




// 3.1 Function definition
int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;    
}

// 3.2 Function definition
int inc_mult(int a, int b) {
    return (++a) * (++b);
}