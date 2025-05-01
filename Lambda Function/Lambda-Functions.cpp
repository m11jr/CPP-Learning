#include <iostream>

using namespace std;

/*
    Lambda Functions

    1. Introduction to Lambda Functions
    2. Declaring and using lambda functions
    3. Capture lists
    4. Capture all in context
*/






int main() {

    /*
        1. Introduction to Lambda Functions

        A lambda function is a special type of function that can be defined inline, 
        without having to declare it in a separate function definition. 
        Lambda functions are anonymous, meaning that they do not have a name, 
        and they can be used as arguments to other functions or as variables in their own right.
    */



    /*
        2. Declaring and using lambda functions

        The syntax for defining a lambda function in C++ is as follows:

        [capture-list] (parameter-list) -> return-type { function-body }

        a) The "capture-list" is an optional comma-separated list of variables that the lambda function will capture from the enclosing scope. 
        These variables can be accessed within the function body of the lambda function. 
        If no variables are captured, an empty capture list can be specified with "[]".

        b) The "parameter-list" is a comma-separated list of arguments that the lambda function takes, just like a regular function.

        c) The "return-type" specifies the return type of the lambda function. 
        This can be omitted if the return type can be deduced from the function body.

        d) The "function-body" is the actual code that will be executed when the lambda function is called. 
        It can contain any valid C++ code, including control structures, loops, and other lambda functions.
    */


    // Example 1:
    auto func = []() {
        cout << "Hello World!" << endl;
    };

    func();
    func();


    // Example 2: of a lambda function that takes two integers as arguments and returns their sum:
    auto sum = [](int a, int b) -> int {
        return a + b;
    };

    int result = sum(3, 4);

    cout << "result: " << result << endl;



    // Example 3: Call lambda function directly after definition
    []() {
        cout << "Auto Call Lambda Function" << endl;
    }();   // why is this lambda function called immediately after the definition?


    // Example 4: Lambda function that takes parameters
    [](double a, double b) {
        cout << "a + b = " << (a + b) << endl;
    }(12.1, 5.7);


    // Example 5: Lambda function that returns something
    auto result_1 = [](double a, double b) {
        return (a + b);
    }(12.1, 5.7);

    cout << "result_1: " << result_1 << endl;

    // Print result directly
    cout << "result: " << [](double a, double b) { return (a + b); }(12.5, 5.7) << endl;


    // Example 6: Specify return type explicitly
    auto result_2 = [](double a, double b)->int{
        return (a + b);
    }(12.1, 5.7);

    cout << "result_2: " << result_2 << endl;
    cout << "sizeof(result_2) = " << sizeof(result_2) << endl;




    /*
        3. Capture lists

        Sometimes we want to use things outside of the lambda function inside the lambda function here.

        a) The "capture-list" is an optional comma-separated list of variables that the lambda function will capture from the enclosing scope. 
        These variables can be accessed within the function body of the lambda function. 
        If no variables are captured, an empty capture list can be specified with "[]".
    */

    double a(10);
    double b(20);

    auto func = [a, b]() {
        cout << "a + b = " << (a + b) << endl;
    };

    func();

    /*
        The scope (or body) of the lambda function does not have access to the outer context,
        and for this reason we cannot change these variables inside the lambda function, 
        nor use them without explicitly specifying them in the capture list.
    */

    // Capturing by value: what we have in the lambda function is a copy
    int c = 99;

    auto func = [c]() {
        cout << "Inner value : " << c << endl;
    };

    for (size_t i(0); i < 5; ++i) {
        cout << "Outer value : " << c << endl;
        func();
        ++c;
    }


    // Capturing by reference: what we have in the lambda function is a copy
    int c = 99;

    auto func = [&c]() {
        cout << "Inner value : " << c << ", &inner : " << &c << endl;
    };

    for (size_t i(0); i < 5; ++i) {
        cout << "Outer value : " << c << ", &outer : " << &c << endl;
        func();
        ++c;
    }




    /*
        4. Capture all in context

        1) In C++, lambda functions can capture variables from their enclosing context by value or reference. 
        2) When capturing by value, the value of the variable is copied into the lambda's context, 
        while capturing by reference allows the lambda to access the variable directly in its original context.

        3) To capture all variables in the enclosing context by value, you can use the capture-all syntax [=].

        Here's an example:
    */

    int a = 42;
    double b = 3.14;
    
    auto lambda = [=]() {
        cout << "a = " << a << ", b = " << b << endl;
    };
    
    lambda();


    /*
        4) To capture all variables in the enclosing context by reference, you can use the capture-all by reference syntax [&]. 

        Here's an example:
    */
    int a = 42;
    double b = 3.14;
    
    auto lambda = [&]() {
        a++;
        cout << "&a = " << &a << ", &b = " << &b << endl;
    };
    
    lambda();

    cout << "a = " << a << endl;



    /*
        Use cases of lambda functions

        Lambda functions are a powerful feature in C++ that allow you to define inline functions without having to declare a separate function. 
        Here are some common use cases for lambda functions in C++:

        1. Sorting and filtering algorithms: Lambda functions can be used as predicates for sorting and filtering algorithms. 
        For example, if you have a collection of objects and you want to sort them based on a specific property,
        you can define a lambda function that takes two objects as input and returns a boolean value indicating whether the first object should come before the second object in the sorted output.

        2. Callback functions: Lambda functions can be used as callbacks to handle events or to perform tasks when a certain condition is met.
        For example, you could define a lambda function to be called when a button is clicked in a graphical user interface.

        3. Asynchronous programming: Lambda functions can be used with asynchronous programming libraries like Boost.
        Asio or the C++11 <future> library. This allows you to define the behavior of a task or a callback in a concise and easy-to-read way.

        4. Functional programming: Lambda functions can be used in functional programming styles, 
        such as when using std::transform() or std::accumulate(), to define the behavior of a transformation or aggregation.
        Resource acquisition and management: Lambda functions can be used in conjunction with the RAII (Resource Acquisition Is Initialization) idiom to acquire and manage resources such as files or database connections.    
    */


}