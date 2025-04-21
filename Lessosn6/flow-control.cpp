#include <iostream>

using namespace std;

/*
    Objectives.

    1. Block Structure
    2. If Statements
    3. Else If
    4. Switch
    5. Ternary Operators
*/

int main() {

    /*
        1. Block Structure

        In C++, a block structure is a group of statements enclosed within curly braces "{ }". 
        A block structure is also known as a compound statement. 
        These statements can include variable declarations, loops, conditional statements, and function calls.
    */

    {
        int a = 1;
        cout << a << endl;   // 1

        {
            int a = 2;
            cout << a << endl;   // 2

            {
                cout << a << endl;   // 2
            }
        }
    }

    // parameter 'a' is out of scope
    // cout << a << endl;   // will generate compile time error

    cout << "----------------------------" << endl << endl;


    /*
        2. If Statements
    */

    int a = 10;
    int b = 15;

    bool result = (a < b);

    cout << std::boolalpha;

    cout << "result: " << result << endl;   // true

    if (result == true) {
        cout << a << " less than " << b << endl;
    }

    if (!(result == true)) {      // equvialents: if (result != true);  if (result == false);
        cout << a << " is not less than " << b << endl;
    }

    // alternative to above
    if (result == true) {
        cout << a << " less than " << b << endl;
    } else if (!(result == true)) {
        cout << a << " is not less than " << b << endl;
    }

    // alternative to above
    if (result == true) {
        cout << a << " less than " << b << endl;
    } else {
        cout << a << " is not less than " << b << endl;
    }

    // alternative to above
    if (result) {
        cout << a << " less than " << b << endl;
    } else {
        cout << a << " is not less than " << b << endl;
    }

    // alternative to above
    if (a < b) {
        cout << a << " < " << b << endl;
    } else {
        cout << a << " > " << b << endl;
    }

    // nested conditional statements
    bool red = false;
    bool green = true;
    bool yellow = false;

    bool police_stop = true;

    if (red) {
        cout << "Stop" << endl;
    }

    if (yellow) {
        cout << "Slow down" << endl;
    }

    if (green) {
        if (police_stop) {
            cout << "Stop" << endl;
        } else {
            cout << "Go" << endl;
        }
    }

    // The best alternative to the above!
    if (green && !police_stop) {
        cout << "Go" << endl;
    } else {
        cout << "Stop" << endl;
    } 
          
    cout << "----------------------------" << endl << endl;


    /*
        3. Else If
    */

    // Tools
    const int Pen = 10; 
    const int Marker = 20;
    const int Eraser = 30;
    const int Rectangle = 40;
    const int Circle = 50;
    const int Ellipse = 60;

    int tool(Eraser);

    if (tool == Pen) {
        cout << "Active tool is pen" << endl;
    }
    else if (tool == Marker) {
        cout << "Active tool is Marker" << endl;
    }
    else if (tool == Eraser) {
        cout << "Active tool is Eraser" << endl;
    }
    else if (tool == Rectangle) {
        cout << "Active tool is Rectangle" << endl;
    }
    else if (tool == Circle) {
        cout << "Active tool is Circle" << endl;
    }
    else if (tool == Ellipse) {
        cout << "Active tool is Ellipse" << endl;
    }

    cout << "Moving on ..." << endl;
    

    /*
        4. Switch

        When C++ reaches a break keyword, it breaks out of the switch block. 
        This will stop the execution of more code and case testing inside the block. 
        When a match is found, and the job is done, it's time for a break. 
        There is no need for more testing.

        A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.
    */

    // optimal alternative to the above
    switch (tool)
    {
        case Pen : {
            cout << "Active tool is pen" << endl;
        }
        break;

        case Marker : {
             cout << "Active tool is Marker" << endl;
        }
        break;

        case Eraser : {
            cout << "Active tool is Eraser" << endl;
        }
        break;

        case Rectangle : {
            cout << "Active tool is Rectangle" << endl;
        }
        break;

        case Circle : {
            cout << "Active tool is Circle" << endl;
        }
        break;

        case Ellipse : {
            cout << "Active tool is Ellipse" << endl;
        }
        break;
    
        default: {
            cout << "No match found" << endl;
        }
        break;
    }

    cout << "Moving on ..." << endl;

    // another example
    char grade = 'D';

    switch(grade) {
        case 'A' :
            cout << "Excellent!" << endl; 
            break;
        case 'B' :
        case 'C' :
            cout << "Well done" << endl;
            break;
        case 'D' :
            cout << "You passed" << endl;
            break;
        case 'F' :
            cout << "Better try again" << endl;
            break;
        default :
            cout << "Invalid grade" << endl;
    }

    cout << "Your grade is " << grade << endl;

    cout << "----------------------------" << endl << endl;


    /*
        5. Ternary Operators

        The purpose of a ternary expression in programming is to provide a shorthand way to write a simple if-else statement. 
        It allows a programmer to write a concise and readable code.

        Overall, Ternary expressions provide a shorter and more readable way to write simple if-else statements, 
        and also it can improve the readability of the code and make it more concise.
    */

    int a = 2;
    int b = 5;
    int max;

	cout << "using regular if " << endl;
	
    // regular if else
    if(a > b) {
        max = a;
    } else {        // !(a > b) ==>  a < b OR a == b
        max = b;
    }

    cout << "max: " << max << endl;

    // Ternary operator
    max = (a > b) ? a : b;

    cout << "max: " << max << endl;

    auto min = (a > b) ? a : 22.5f;
    cout << "min: " << min << endl;

    // Ternary initialization
    bool fast = false;
    int speed = fast ? 300 : 90;
    int velocity(fast ? 9 : 3);     // int velocity = fast ? 9 : 3;

    cout << "The speed is:    " << speed << endl;
    cout << "The velocity is: " << velocity << endl;

    cout << "----------------------------" << endl << endl;
}