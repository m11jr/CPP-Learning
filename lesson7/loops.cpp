#include <iostream>

using namespace std;

/*
    Objectives.

    1. Loops Introduction
    2. For Loop
    3. While Loop
    4. Do While Loop
*/

int main() {

    /*
        1. Loops Introduction

        In programming, loops are used to execute a set of statements repeatedly. 
        They allow a programmer to perform repetitive tasks with a single set of code, 
        rather than writing the same code multiple times.

        There are several types of loops in programming, including:

        1. For loop: This type of loop is used to repeat a specific block of code a certain number of times. 
        It uses a counter variable to keep track of the number of iterations.
        2. While loop: This type of loop is used to repeat a specific block of code as long as a certain condition is met. 
        It checks the condition before each iteration and exits the loop when the condition is no longer met.
        3. Do-while loop: This type of loop is similar to a while loop, but it checks the condition after each iteration. 
        This means that the loop will always execute at least once.
        4. Foreach loop: This loop is used to iterate over elements of an array or a collection. 
        It's used in programming languages like C#, Java, Python, and others.
        5. Nested loops: Loops can be nested within other loops. 
        This means that one loop can be placed within the body of another loop.

        Here is an example of a for loop in C++ that prints the numbers from 1 to 10:
    */ 

    for (int i = 0; i < 10; i++) {
        cout << "i: " << i << endl;
    }

    // alternatively without scopes
    for (int i = 0; i < 10; i++)
        cout << "i: " << i << endl;

    cout << "----------------------------" << endl << endl;    

    
    /*
        2. For Loop

        For loop: This type of loop is used to repeat a specific block of code a certain number of times. 
        It uses a counter variable to keep track of the number of iterations.

        for (statement 1; statement 2; statement 3) {
            // code block to be executed
        }

        Statement 1) is executed (one time) before the execution of the code block.
        Statement 2) defines the condition for executing the code block.
        Statement 3) is executed (every time) after the code block has been executed.
    */ 


    /*
        Print I love C++ 10 times : The bad way

        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
    */

    //  for loop : the good way
    for (unsigned int i = 0; i < 10; i++) {
        cout << "I love C++" << endl;
    }

    //  Use size_t : a representation of some unsigned int for positive numbers [sizes]
    for (size_t i(0); i < 10; i++) {
        cout << i << " : I love C++" << endl;
    }

    cout << "Loop done!" << endl;
    
    //  sizeof(size_t)
    cout << "sizeof(size_t) : " << sizeof(size_t) << endl;

    //  Scope of the iterator
    for(int i = 0; i < 10 ; ++i) {
        cout << i << " : I love C++" << endl;
    }

    // cout << "i : " << i << endl;    //  Compiler error : i is not in scope

    //  Iterator declared outside the loop

    size_t i(0);    // Iterator defined outside

    for(i ; i < 5 ; ++i) {
        cout << i << ' ';
    }
    cout << endl;

    //  Leave out the iterator declaration part
    for(; i < 8 ; ++i) {
        cout << i << ' ';
    }
    cout << endl;

    //Don't hard code values : BAD!
    
    /*
        Constants
        
        When you do not want others (or yourself) to change existing variable values, 
        use the const keyword (this will declare the variable as "constant", 
        which means unchangeable and read-only):

        Example:
        const int minutesPerHour = 60;
        const float PI = 3.14; 
    */

    const size_t COUNT = 100;

    for(size_t i(0) ; i < COUNT; ++i) {
        cout << i << ' ';
    }
    cout << "Loop done!" << endl;

    //  This example will only print even values between 0 and 10:
    for (int i = 0; i <= 10; i += 2) {
        cout << i << " ";   // 0 2 4 6 8 10
    }
    cout << endl;


    // study case (run it!)
    for (int i = 0; i <= 10; i *= 2) {
        cout << i << " "; 
    }

    cout << "----------------------------" << endl << endl; 

    
    /*
        3. While Loop

        While loop: This type of loop is used to repeat a specific block of code as long as a certain condition is met. 
        It checks the condition before each iteration and exits the loop when the condition is no longer met.

        Syntax:

        while (condition) {
            // code block to be executed
        }
    */ 

    /*
        Print I love C++ 10 times : The bad way

        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
        cout << "I love C++" << endl;
    */

    const size_t COUNT(3);
    size_t i(0);    // Iterator declaration

    while (i < COUNT ) {
       cout << "I love C++" << endl;
       ++i;    //  will i++ change something?
    }
    cout << "Loop done!" << endl;
    
    int number;
    int sum = 0;

    // While data input from console
    while (cin >> number) {
        sum = sum + number;
        cout << "sum: " << sum << endl;
    }

    cout << "----------------------------" << endl << endl; 


    /*
        4. Do While

        The do/while loop is a variant of the while loop.
        This loop will execute the code block once, before checking if the condition is true, 
        then it will repeat the loop as long as the condition is true.

        Syntax:

        do {
            // code block to be executed
        }
        while (condition);
    */ 

    int x = 5;
    while (x > 0) {
        cout << x << ' ';
        x--;
    }
    cout << endl;

    int y = 5;
    do {
        cout << y << ' ';
        y--;
    } while (y > 0);
    cout << endl;

    int i = 0;
    do {
        cout << i << ' ';
        i++;
    }
    while (i < 5);
    cout << endl;

}