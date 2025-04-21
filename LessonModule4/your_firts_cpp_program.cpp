
/*
    Prerequisites: 

    1. What will we learn and how will we learn

    2. File formats in computers
        File formats in computers refer to the way in which data is stored in a file. 
        Different file formats are used to store different types of data, such as text, images, audio, video, and more. 
        Each file format has a specific structure and organization of data that is used to store and retrieve the information.

    3. Computer files and folders architecture
        The computer files and folders architecture refers to the way in which files and folders are organized and stored on a computer's storage devices, such as hard drives and solid-state drives.
        At the highest level, the computer files and folders architecture is usually divided into two main sections: the system files and the user files.
        The system files are those that are necessary for the proper functioning of the operating system and other system software. 
        These files are typically stored in the root directory of the main storage device and include system libraries, device drivers, and configuration files.
        The user files are those that are created, accessed, and modified by the user.
        These files include documents, images, music, and videos, and are typically stored in the user's home directory.    

    4. Command Line Interface (CLI)
        Bash scripts are used to automate tasks, automate repetitive command-line tasks, and perform other command-line tasks that would be too tedious or time-consuming to perform manually.
        Examples:
        1) Here is an example of a Bash script that finds all JPEG files in the current directory and its subdirectories:
            find . -name "*.jpg" -o -name "*.jpeg" -print
        2) Here is an example of a Bash script that finds all JPEG files in the current directory and its subdirectories and writes their path to a text file:
            find . -name "*.jpg" -o -name "*.jpeg" -print >> jpeg_files.txt
        3) Here is an example of a Bash script that finds all JPEG files in the entire computer and writes their path to a text file: 
            find ~ -name "*.jpg" -o -name "*.jpeg" > jpeg_files.txt

    5. IDE stands for Integrated Development Environment. 
       It is a software application that provides comprehensive facilities to computer programmers for software development. 
       An IDE typically consists of a source code editor, build automation tools, and a debugger. 
       It is designed to ease the process of writing and testing software, by providing a single, 
       integrated interface for all of the necessary development tools.           
*/

/*
    Your First C++ Program

    1. Comments
    2. Errors and Warnings
    3. Statements and Functions
    4. Data input and output
    5. C++ Program Execution Model
*/

// Standard Input, Output Streams Library, (the part of Standart Library) 
// source (std stands for standart): https://cplusplus.com/reference/iostream/
// 
#include <iostream>
#include <string>

using namespace std;

int addNumbers(int a, int b) 
{
    int sum = a + b;

    return sum;
}


/*
    Entry Point.
    
    main() function is the entry point of any C++ program.
    It is the point at which execution of program is started.
    When a C++ program is executed, the execution control goes directly to the main() function.
    Every C++ program must have a main() function.
*/
int main()
{
    // endl statement will print new line (Insert newline and flush)
    cout << "First"  << endl;
    cout << "Second";
    cout << "Third" << endl << endl << endl;

    cout << "Hello World" << endl;

    /*
        A comment is text that the compiler ignores but that is useful for programmers. (see iostrem library as an example)
        Comments are normally used to annotate code for future reference. 
        The compiler treats them as white space.  
        Nested comments are not allowed.
        Use comments to docuemnt your code. 
        Don't overdo it because it might look like a romance.
    */


    /*
        Compile time vs Runtime
        Compile-time and Runtime are the two programming terms used in the software development. 
        Compile-time is the time at which the source code is converted into an executable code while the run time is the time at which the executable code is started running. 
        Both the compile-time and runtime refer to different types of error.
    */

    /*
        Errors and Warnings. 
        There are:

        1. Compile Time Errors
        2. Runtime Errors
        3. Warnings

        The ultimate goal of any C++ programmer is to be able to generate a binary executable file from the C++ code.
        And we have to run this code through compiler to be able to do that.
        And there is a set of rules that the compiler applies to our code in order to successfully compile.
        And those requirements we have to follow in our C++ program. 
        If we are going to break these we shall get problems, 
        and these problems are going to come from 'Compile Time Errors', 'Runtime Errors', or 'Warnings'.
    */

    /*
        Compile Time Error, Example:

        cout << "Compile Time Error"

        [Error: expected ';' after expression]
    */

    /*
        A runtime error in a program is an error that occurs while the program is running after being successfully compiled.
        There are a variety of runtime errors that occur such as "logical errors", Input/Output errors, 
        undefined object errors, division by zero errors, and many more.
        Runtime errors are commonly called referred to as “bugs” and are often found during the debugging process before the software is released.

        Runtime Time Error, Example:
    */

    int x = 10 / 0;     // warning: division by zero is undefined [-Wdivision-by-zero]
  

    /*
        Sometimes runtime errors can cause your program to fail and terminate and in this case, we say that the program has crashed.
        In the above example we have a kind a problem that has "warning" and it does not terminate our program.
        The above problem is not serious enough to halt our compilation. 
        Compilation in this case is going to succeed but it will tell you that you have some problems (it is a warning).
    */
    
    /*
        A runtime error causing a crash, such as:
        int a = 3 / 0;
        
        cout << a << endl;
        cout << "What is next?" << endl;
    */

    /*
        Let's look at the differences between compile-time and runtime:

        Compile-time            	                       
            1. The compile-time errors are the errors which are produced at the compile-time, and they are detected by the compiler.
            2. In this case, the compiler prevents the code from execution if it detects an error in the program.
            3. It contains the syntax and semantic errors such as missing semicolon at the end of the statement.

        Runtime
            1. The runtime errors are the errors which are not generated by the compiler and produce an unpredictable result at the execution time.
            2. In this case, the compiler does not detect the error, so it cannot prevent the code from the execution.
            3. It contains the errors such as division by zero, determining the square root of a negative number.
    */


    /*
        Statements and Functions.

        A statement is a basic unit of computation in a C++ program.
        Every C++ program is a collection of statements organized in a certain way to achieve some goal.
        Statements end with a semicolon in C++ ";" 
        Statements are executed in order from top to bottom when the program is run.
        Execution keeps goin until there is a statement causing the program to terminate, or run another sequence of statements.
    */

    //  Statemetns
    int firstNumber = 10;
    int secondNumber = 5;

    int sum = firstNumber + secondNumber;

    cout << "Sum: " << sum << endl;


    /*
        In mathematics, a function from a set X to a set Y assigns to each element of X exactly one element of Y.
        The set X is called the domain of the function, and the set Y is called the codomain of the function.
        A function, its domain, and its codomain, are declared by the notation f: X→Y, 
        and the value of a function f at an element x of X, denoted by f(x), 
        is called the image of x under f, or the value of f applied to the argument x.

        In programming: 

        There are 4 types of functions:
        Functions with arguments and return values. This function has arguments and returns a value.
        Functions with arguments and without return values.
        Functions without arguments and with return values. 
        Functions without arguments and without return values.

        More about functions: https://www.mathsisfun.com/sets/injective-surjective-bijective.html

        A function must be defined before it's use.
    */

    // Functions
    sum = addNumbers(12, 8);

    cout << "Sum: " << sum << endl;
    cout << "Reuse same function: " << addNumbers(22, 8) << endl;


    /*
        INPUT - OUTPUT

        cout << "Some Text";   // in this case we give an output stream to the console with "<<"

        cout -> Prints data to the console(terminal)
        cin  -> Reading data from thhe terminal
        cerr -> Printing errors to the console
        clog -> Printing log messages to the console
    */

    // output stream
    int age(31);    // another syntax method for assignment

    cout << "The age is: " << age << endl;


    // input stream
    int height = 175;
    string name;

    cout << "Please type your name: " << endl;

    cin >> name;

    cout << "Hello " << name << "!" << endl;

    // chaning the input
    cin >> name >> height;     // The program will wait as a first parameter string and a second parameter number. 
                               // If the second parameter is not a number then by default it will be 0.
    cout << "Hello " 
         << name << ", your height is "
         << height << endl;

    //  These input-output streams are basically the ways to bring data out of your program and put data into your program           
}