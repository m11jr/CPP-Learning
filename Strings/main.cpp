#include <iostream>
#include <string>
#include <cstring>

using namespace std;

/*
    Character Manipulation and Strings

    1. Introduction to Strings
    2. Character Manipulation
    3. C-string manipulation
    4. C-String concatenation and copy
    5. Introducing string
    6. Declaring and using string

    Source: 
    1) https://cplusplus.com/reference/string/string/
    2) https://en.cppreference.com/w/cpp/header/cstring
*/


int main() {

    /*
        1. Introduction to Strings

        Strings are used for storing text.

        Follow the lecture

        source: https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
    */ 

    

    /*
        2. Character Manipulation
    */ 

    // Checck if character is alphanumeric
    cout << "C is alphanumeric: " << isalnum('C') << endl;
    cout << "^ is alphanumeric: " << isalnum('^') << endl;
    cout << "7 is alphanumeric: " << isalnum('7') << endl;
    

    // Can use this as a test condition
    char input = '*';

    if (isalnum(input)) {
        cout << input << " is alphanumeric" << endl;
    } else {
        cout << input << " is not alphanumeric" << endl;
    }

    cout << "===================================" << endl;


    // Check if character is alphabetic
    cout << "C is alphabetic: " << isalpha('C') << endl;
    cout << "^ is alphabetic: " << isalpha('^') << endl;  
    cout << "7 is alphabetic: " << isalpha('7') << endl;

    if (isalpha(input)) {
        cout << input << " is alphabetic" << endl;
    } else {
        cout << input << " is not alphabetic" << endl;
    }

    cout << "===================================" << endl;


    // Check if character is blank
    char message[] = "Hello there. How are you doing? the sun is shining.";
    int blankCounter(0);

    cout << message << endl;

    // Find and print blank index
    for (size_t i = 0; i < sizeof(message) / sizeof(message[0]); ++i) {
        if (isblank(message[i])) {
            cout << "Found a blank character at index: [" << i << "]" << endl;
            ++blankCounter;
        }
    }

    cout << "In total we have " << blankCounter << ", blanks" << endl;

    cout << "===================================" << endl;


    // Check if character is lowercase or uppercase
    char thought[]("C++ Programming is the most Powerful in the Solar System");

    size_t lowercaseCount(0);
    size_t uppercaseCount = 0;

    cout << "Original string: " << thought << endl;

    for (auto character : thought) {
        if (islower(character)) {
            ++lowercaseCount;
        }

        if (isupper(character)) {
            ++uppercaseCount;
        }
    }

    cout << "Lowercase count: " << lowercaseCount << ", uppercase count: " << uppercaseCount << endl;


    // Check if character is a digit
    char statement[]("Mr Hamilton owns 221 cows.");

    size_t digitCount = 0;

    for (auto element : statement) {
        if (isdigit(element)) {
            digitCount++;
        }
    }

    cout << "Found " << digitCount << " digits" << endl;

    cout << "===================================" << endl;


    // Turning the characters to lowercase or to uppercase
    char originalText[]("Home. The feeling of belonging");
    char editedText[sizeof(originalText)];

    cout << "Original text: " << originalText << endl;

    // Turn to uppercase
    for(size_t i = 0; i < sizeof(originalText); ++i) {
        editedText[i] = toupper(originalText[i]);
    }
    cout << "Uppercase: " << editedText << endl;

    // Turn to lowercase
    for(size_t i = 0; i < sizeof(originalText); ++i) {
        editedText[i] = tolower(originalText[i]);
    }
    cout << "Lowercase: " << editedText << endl;

    cout << "===================================" << endl;




    /*
        3. C-string manipulation
    */

    // strlen : Find the length of a string
    const char message1[] = {"The sky is blue."};

    // array decays into pointer when we use const char *
    const char *message2 = {"The sky is blue."};

    cout << message1 << endl;

    // strlen ignores null character \0
    cout << "strlen(message1): " << strlen(message1) << endl;

    // sizeof includes null character \0
    cout << "sizeof(message1): " << sizeof(message1) << endl;

    // strlen still works with decayed arrays
    cout << "strlen(message2): " << strlen(message2) << endl;

    // Prints the size of pointer
    cout << "sizeof(message2): " << sizeof(message2) << endl;

    cout << "===================================" << endl;




    /*
        4. C-String concatenation and copy

        Source: https://en.cppreference.com/w/cpp/header/cstring
    */

    // Concatenation
    char dest[50] = "Hello";
    char src[50]  = " World!";

    strcat(dest, src);

    cout << dest << endl;    // Hello World!

    strcat(dest, " Goodbye World!");

    cout << dest << endl;   // Hello World! Goodbye World!
    

    // More concatenation
    char *dest1 = new char[30];
    char *source1 = new char[30];
    
    dest1[0] = 'H';
    dest1[1] = 'e';
    dest1[2] = 'l';
    dest1[3] = 'l';
    dest1[4] = 'o';
    dest1[5] = '\0';

    source1[0] = ' ';
    source1[1] = 'W';
    source1[2] = 'o';
    source1[3] = 'r';
    source1[4] = 'l';
    source1[5] = 'd';
    source1[6] = '\0';

    cout << "strlen(dest1):   " << strlen(dest1) << endl;
    cout << "strlen(source1): " << strlen(source1) << endl;

    cout << "Concatenating..." << endl;
    strcat(dest1, source1);

    cout << "strlen(dest1): " << strlen(dest1) << endl;
    cout << "dest1:         " << dest1 << endl;


    // strncat: concatenates n characters from src to dest and returns a pointer to the result string
    char dest2[50] = { "Hello" };
    char source2[30] = {" There is a bird on my window"};

    // Here we are basically concatenating the first 6 characters from the source
    cout << strncat(dest2, source2, 6) << endl;    // Hello There

    // dest2 is changed
    cout << "The concatenated string is: " << dest2 << endl;


    const char *source3 = "C++ is a multipurpose programming language.";
    char *dest3 = new char[strlen(source3) + 1];    // +1 for the null character

    // copies character by character from source3 to dest3
    strcpy(dest3, source3);

    cout << "sizeof(dest3): " << sizeof(dest3) << endl;
    cout << "strlen(dest3): " << strlen(dest3) << endl;
    cout << "dest3: " << dest3 << endl;


    // strncpy : Copy n characters from src to dest
    const char *source4 = "Hello";
    char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};    // Have to put the terminating null char if we want to print

    cout << "dest4: " << dest4 << endl;   // abcdef

	cout << "Copying..." << endl;

    strncpy(dest4, source4, 5);

    cout << "dest4: " << dest4 << endl;   // Hellof




    /*
        5. Introducing string

        In C++, a char data type represents a single character, 
        while a string data type represents a sequence of characters.

        A char data type is a primitive data type that can store a single character value. 
        The character is represented by its ASCII code. A char variable can hold only one character at a time.

        A string data type is an object that can hold a sequence of characters. 
        It can be initialized using a string literal or by assigning a value to it. 

        A string can dynamically adjust its size as per the length of the content!

        One important difference between a char and a string is that a char is a primitive type, 
        while a string is an object.
        As a result, a string provides many useful member functions such as size(), substr(), find(), replace(), etc., 
        while char does not have any built-in member functions.

        !Important
        One simple reason to use char* instead of the string is if you have to avoid dynamic memory allocation.
    */




    /*
        6. Introducing string

        Declaring and using std::string

        Source: https://cplusplus.com/reference/string/string/
    */

    string fullname;   // empty string
    string planet = "Earth";
    string preferred_planet(planet);

    string message("Hello there", 5);   // assigns first 5 characters
    string weird_message(4, 'e');       // initialize with multiple copies of a char e

    cout << fullname << endl;        // empty
    cout << message << endl;         // Hello
    cout << weird_message << endl;   // eeee

    string greeting("Hello World!");
    string saying_hello(greeting, 6, 5);   // assigns characters starting at index 6 and following next 5 characters

    cout << saying_hello << endl;

    // Changing string dynamically at runtime
    cin >> planet;

    cout << "planet: " << planet << endl;

}