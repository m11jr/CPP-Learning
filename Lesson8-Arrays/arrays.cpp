#include <iostream>

using namespace std;

/*
    Arrays

    1. Introduction to Arrays
    2. Declaring and using arrays
    3. Size of an array
    4. Arrays of characters
    5. Array Bounds
*/


int main() {

    /*
        1. Introduction to Arrays

        An array is a data structure that stores a collection of elements identified by an index or a key.

        Arrays stores elements of the same type! 
        (the system wants to know, based on the size of the array, how many bytes to allocate in memory, 
        if the array is of integer type and the size is 10, then 40 bytes of memory will be allocated, 
        if the type of the array elements is not of the same type, 
        then it will be difficult for the system to accurately allocate the memory size for this array) 
    */ 


    /*
        2. Declaring and using arrays
    */ 

    // Declare an array of units
    int scores[10];

    cout << "sizeof(scores): " << sizeof(scores) << endl;

    // Read data (will print junk values)
    cout << "scores[0]: " << scores[0] << endl;
    cout << "scores[1]: " << scores[1] << endl << endl;

    // Read with a loop
    for (size_t i(0); i < 10; ++i) {
        cout << "scores[" << i << "]: " << scores[i] << endl;
    }

    // Write data into array 
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    // Print data out
    for (size_t i(0); i < 10; ++i) {
        cout << "scores[" << i << "]: " << scores[i] << endl;
    }

    // Write data in a loop
    for (size_t i = 0; i < 10; i++) {
        scores[i] = i * 10;
    }

    // Print data out
    for (size_t i(0); i < 10; ++i) {
        cout << "scores[" << i << "]: " << scores[i] << endl;
    }

    // Declare and initialize at te same time
    double salaries[5] = {12.5, 7.2, 13.2, 8.1, 9.3};
    
    // Print data out
    // sizeof(salaries) / sizeof(double) = 5*8/8 = 5
    for (size_t i(0); i < sizeof(salaries) / sizeof(double); ++i) {
        cout << "salaries[" << i << "]: " << salaries[i] << endl;
    }

    // If we will not initialize all the elements, those you live out are initialized to 0
    int families[5] = {12, 7, 5};

    // Print data out
    for (size_t i(0); i < sizeof(families) / sizeof(families[0]); ++i) {
        cout << "families[" << i << "]: " << families[i] << endl;
    }

    // Omit the size of the array at declaration
    int classes[] = {10, 12, 15, 11, 18, 17};

    // Range based "for" loop
    for (auto value : classes)  {
        cout << "value: " << value << endl;
    }

    const int birds[] = {2, 6, 1, 3};
    int sum(0);

    /*
        The range-based 'for' loop is really cool in the sense that,
        we don't have to keep track of the size of the birds array as it can be changed.
    */
    for (int element : birds) {
        sum += element;
    }

    cout << "Birds sum: " << sum << endl;

    cout << "------------------------------------------" << endl << endl;


    /*
        3. Size of an array
    */ 

    int scores[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    // add 11

    // static iteration is not recommended because array size can change
    for (size_t i = 0; i < 10; ++i) {
        cout << "scores[" << i << "] " << scores[i] << endl;
    }

    cout << "sizeof(scores):    " << sizeof(scores) << endl;
    cout << "sizeof(scores[0]): " << sizeof(scores[0]) << endl;

    int count = sizeof(scores) / sizeof(scores[0]);

    // more flexible way to itarete an array
    for (size_t i = 0; i < count; ++i) {
        cout << "scores[" << i << "] " << scores[i] << endl;
    }

    /*
        Range-based iteration, in this case, we can not track the index of an array!
    */
    for (auto score : scores) {
        cout << "score: " << score << endl;
    }

    cout << "------------------------------------------" << endl << endl;


    /*
        4. Arrays of characters
    */ 

    // Declare an array
    char message[5] = {'H', 'e', 'l', 'l', 'o'};
                    //  0    1    2    3    4

    // print out an array through looping
    for (auto c : message) {
        cout << c;
    }
    cout << endl;

    message[1] = 'a';

    // print out an array through looping
    for (auto c : message) {
        cout << c;
    }
    cout << endl;

    cout << message << endl;

    // If character array is null terminated, it's called as C-String
    char message2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << message2 << endl;
    cout << "sizeof(message2): " << sizeof(message2) << endl;

    // String literal
    char message3[] = { "Hello World, how are you doing!" };
    cout << message3 << endl;
    cout << "sizeof(message3): " << sizeof(message3) << " bytes" << endl;

    cout << "------------------------------------------" << endl << endl;


    /*
        5. Arrays Bounds
    */

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Read beyond bounds: will read garbage or crash
    cout << numbers[12] << endl;

    /*
        Write beyond bounds. The compiler allows it. 
        But you do not own the memory at index 12, 
        so other programs may modify it and your program may read bogus data at a later time.
        Or you can even currupt data used by other parts of your program.
    */

    numbers[12] = 1000;
    cout << numbers[12] << endl;

    cout << "------------------------------------------" << endl << endl;
}