#include <iostream>

using namespace std;

/*
    Pointers

    1.  Introduction to Pointers
    2.  Declaring and using pointers
    3.  Program Memory Map
    4.  Dynamic Memory Allocation
    5.  Dangling Pointers
    6.  When new Fails
    7.  Null Pointer Safety
    8.  Memory Leaks
    9.  Dynamically allocated arrays
    10. Pointer to char

*/


int main() {

    /*
        1. Introduction to Pointers

        In C++, a pointer is a variable that stores the memory address of another variable.
        Pointers allow you to manipulate variables indirectly, that is, through their memory addresses, rather than their values. 
        This makes it possible to work with arrays, dynamic memory allocation, and other complex data structures. 
        The value stored in a pointer is a memory address, and to access the value stored at that memory address, 
        the pointer must be dereferenced using the * operator. 
        Pointers in C++ must be declared as a type (e.g. int*, char*, etc.) to indicate what type of data they are pointing to.
    */ 
    int b = 5;

    cout << b << endl;   // equivalent of b is *(&b)
    cout << &b << endl;
    cout << *(&b) << endl;

    int x = 5;
    int *pointer1 = &x;        // declare and assign
    int *pointer2 = nullptr;   // declare and assign to null pointer

    pointer2 = &x;   // assign after

    cout << "x: " << x << endl;                  // 5
    cout << "address of x: " << &x << endl;      // 0x_some_hex
    cout << "pointer of x: " << *(&x) << endl;   // 5 (pointer to the address of x (i.e. &x))

    cout << "pointer1: " << pointer1 << endl;    // 0x7ff7b227c3bc
    cout << "*pointer1: " << *pointer1 << endl;  // 5

    cout << "pointer2: " << pointer2 << endl;    // 0x7ff7b227c3bc
    cout << "*pointer2: " << *pointer2 << endl;  // 5


    cout << "------------------------------------------" << endl << endl;



    /*
        2. Declaring and using pointers
    */ 

    // Declare and initialize pointer
    int    *pointerI;
    double *pointerD; 

    // Explicitly initialize with nullptr 
    int *number = nullptr;
    int *number1(nullptr);

    // Pointers to different variables are of the same size
    cout << "sizeof(int):     " << sizeof(int)     << endl;     // 4
    cout << "sizeof(int*):    " << sizeof(int*)    << endl;     // 8?
    cout << "sizeof(double):  " << sizeof(double)  << endl;     // 8
    cout << "sizeof(double*): " << sizeof(double*) << endl;     // 8?

    cout << "sizeof(number):  " << sizeof(number)  << endl;    // 8
    cout << "sizeof(*number):  " << sizeof(*number)  << endl;  // 4, why it is 4 byte?

    cout << endl;

    // It does not matter if you put the * close to data type or to variablle
    int* pointer_1(nullptr);
    int * pointer_2(nullptr);
    int *pointer_3(nullptr);

    int x = 45;
    int *pointer_int = &x;  

    cout << "x:  " << x << endl;                        // 45
    cout << "&x: " << &x << endl;                       // 0x7ff7b383238c
    cout << "pointer_int:  " << pointer_int << endl;    // 0x7ff7b383238c
    cout << "*pointer_int: " << *pointer_int << endl;   // 45

    // We can also change the address stored in a pointer any time
    int y = 47;
    pointer_int = &y;   // assign a different address to the pointer

    cout << "pointer_int:  " << pointer_int << endl;
    cout << "*pointer_int: " << *pointer_int << endl;

    // Can not assign cross assign between pointers of different types
    int *p_int(nullptr);
    double d_var(33);

    // p_int = &d_var;   // will generate a compile-time error

    // Dereferencing a pointer
    int *p_1 = nullptr;
    int data = 58;
    p_1 = &data;

    cout << "value: " << *p_1 << endl;  // 58, dereferencing a pointer

    cout << "------------------------------------------" << endl << endl;



    /*
        3. Program Memory Map Revisited

        Follow the lecture
    */

    cout << "------------------------------------------" << endl << endl;



    /*
        4. Dynamic Memory Allocation

        Dynamic memory allocation is the process of assigning the memory space during the execution time or the run time. 
        Reasons and Advantages of allocating memory dynamically: 
        When we do not know how much amount of memory would be needed for the program beforehand.

        Dynamic memory allocation usually takes place in heap memory layout.
    */

    // How we have used pointers so far
    int number = 22;   // stack
    int *p_number = &number;

    cout << "number:     " << number << endl;
    cout << "&number:    " << &number << endl;
    cout << "p_number:   " << p_number << endl;
    cout << "*p_number:  " << *p_number << endl;

    int *p_number1;   // uninitialized pointer, contains junk address
    int number1 = 12;
    p_number1 = &number1;   // make it point to a valid address

    cout << "*p_number1: " << *p_number1 << endl;

    // The program will crash (i.e. will generate compille time error)
    int *p;   //  contains junk address: could be anything
    *p = 55;  //  writing into junk address: Bad!

    int *some_pointer = nullptr;
    // Will also generate an error because nullptr says our pointer variable has no valid memory address
    // so by initializing value with no correct address will generate an error
    *some_pointer = 33;   // writing into a pointer pointing nowhere

    /*
        1. Dynamically allocate space for a single int on the heap.
        2. This memory belongs to our program from now on.
        3. The system can't use it for anything else, until we return it.
        4. After this line executes, we will have a valid memory location allocated.
        5. The size of allocated memory will be such that it can store the type pointed to by the pointer
    */
    int *pointer = nullptr;
    pointer = new int;

    *pointer = 77;   // writing into dynamically allocated memory

    cout << pointer << endl;    //  ex: 0x7ff03af05b00
    cout << &pointer << endl;   //  ex: 0x7ff03af05f15
    cout << *pointer << endl;   //  77, derefencing

    cout << sizeof(pointer) << endl;    // 8, because it will be the address size
    cout << sizeof(*pointer) << endl;   // 4

    // Returning memory to the operating system
    delete pointer;     // after releasing it, the pointer will contain a junk address
    pointer = nullptr;  // so it is good practice to initialize it to null

    cout << "pointer: " << pointer << endl;   // 0x0 - null address


    //  Stack life time VS Heap lifetime
    {
        int local_var = 45;             // local_var is in stack memory
        int *local_ptr_var = new int;   // local_ptr_var is in heap memory
    }


    int *p_number5 = new int;         // memory location contains junk value
    int *p_number6 = new int(26);     // use direct initialization

    // Here we are allocating heap memory for float number 27.6, 
    // and assigning its address to the float pointer p_number7
    // because pointers in C++ must be declared as a type to indicate what type of data they are pointing to.
    float *p_number7(new float(27.6));
    
    cout << *p_number7 << endl;

    // Remember to release the memory
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    // It is possible to reuse the above pointers
    p_number5 = new int(81);   // here we are reallocatiing new memory in the heap
    cout << *p_number5 << endl;

    // do not forget to release the memory again
    delete p_number5;
    p_number5 = nullptr;

    cout << "Program is ending well" << endl;

    cout << "------------------------------------------" << endl << endl;



    /*
        5. Dangling Pointers

        A dangling pointer is a pointer that points to invalid data or to data which is not valid anymore.
    */

    // Case 1: Uninitialized pointer
    int *pointer_1;  //  dangling uninitialized pointer

    cout << "pointer_1:  " << pointer_1 << endl;
    cout << "*pointer_1: " << *pointer_1 << endl;   // trash value
    
    // Case 2: Deleted pointer
    int *pointer_2(new int(35));

    cout << "*pointer_2 before delete: " << *pointer_2 << endl;

    delete pointer_2;

    cout << "*pointer_2 after delete: " << *pointer_2 << endl;   // trash value

    // Case 3: Multiple pointers pointing to same address
    int *pointer_3(new int(23));
    int *pointer_4(pointer_3);

    cout << "pointer_3 - " << pointer_3 << ", " << *pointer_3 << endl;
    cout << "pointer_4 - " << pointer_4 << ", " << *pointer_4 << endl;

    delete pointer_3;

    // pointer_4 points to deleted memory.
    // Dereferencing it will lead to undefinied behaviour: crash/garbage etc.
    cout << "pointer_4 - " << pointer_4 << ", " << *pointer_4 << endl;

    // Solution 1: initialize your pointers immediately upon declaration
    int *pointer_5(nullptr);
    int *pointer_6(new int(56));

    // Check for nullptr before use
    if (pointer_5 != nullptr) { 
        // some code
    

    /*
        Solution 2: rigt after you call delete on a pointer, remember to reset 
        the pointer to nullptr to make it clear it does not point anywhere
    */
    int *pointer_7 = new int(24);

    delete pointer_7;
    pointer_7 = nullptr;    // reset the pointer

    /*
        Solution 3: 

        For multiple pointers pointing to the same address, make sure there is one clear pointer i.e.
        master pointer that owns memory, other pointers should only be able to dereference when
        the master pointer is valid.
    */
    int *pointer_8(new int(95));   // let's say pointer_8 is the master pointer
    int *pointer_9(pointer_8);

    cout << "pointer_8 - " << pointer_8 << ", " << *pointer_8 << endl;

    // Only use slave pointers when master pointer is valid
    if (pointer_8 != nullptr) {
        cout << "pointer_9 - " << pointer_9 << ", " << *pointer_9 << endl;
    }

    delete pointer_8;   // Master release the memory
    pointer_8 = nullptr;

    // Only use slave pointers when master pointer is valid
    if (!(pointer_8 == nullptr)) {    // it is the same as if(pointer_8 != nullptr)
        cout << "pointer_9 - " << pointer_9 << ", " << *pointer_9 << endl;
    } else {
        cout << "Warning trying to use invalid pointer!" << endl;
    }

    cout << "------------------------------------------" << endl << endl;



    /*
        6. When new Fails
    */ 

    // int *data = new int[100000000000000000];   // trying to allocate huge memory for an array 

    cout << "1. Program ending well" << endl;

    /*
        While the size may be small, 
        but doing multiple separate memory allocations can still exhaust our Heap memory.
        At some point the program is going to fail.

        for (size_t i(0); i < 10000000; ++i) {
            int *data = new int[10000000];
        }
    */
    
    cout << "2. Program ending well" << endl;

    // Exception mechanism
    for (size_t i(0); i < 100; ++i) {
        try {
            int *data = new int[1000000000000];
        } catch(exception &ex) {
            cout << " Something went wrong " << (i + 1) << ": " << ex.what() << endl;
        }
    }

    cout << "3. Program ending well" << endl;

    // Handle with std::nothrow
    for (size_t i(0); i < 100; ++i) {
        // When a heap memory allocation using "new" fails, 
        // the "nothrow" parameter will cause it to set the value of "new" to null.
        int *arr = new (std::nothrow) int[1000000000000];

        if (arr != nullptr) {
            cout << "Data allocated " << (i + 1) << endl;
        } else {
            cout << "Data allocation failed " << (i + 1) << endl;
        }
    }

    cout << "------------------------------------------" << endl << endl;




    /*
        7. Null Pointer Safety
    */ 

    int *pointer = nullptr;   // initialized to nullptr

    if (!(pointer == nullptr)) {
        cout << "pointer points to a VALID address: " << pointer << endl;
    } else {
        cout << "pointer points to a INVALID address" << endl;
    }

    // Compact nullptr check
    if (pointer) {
        cout << "pointer points to a VALID address: " << pointer << endl;
    } else {
        cout << "pointer points to a INVALID address" << endl;
    }

    delete pointer;   // error: pointer being freed was not allocated

    // safe method
    if (pointer != nullptr) {
        delete pointer;
    }
    
    cout << "------------------------------------------" << endl << endl;




    /*
        8. Memory Leaks

        When we lose access to memory that is dynamically allocated
    */ 

    int *pointer = new int(12);   // points to some address (let's call it address1)

    // Should delete and reset to null here

    int number = 55;    // stack variable

    pointer = &number;   // Now pointer points address2, but address1 is still in use by our program
    // But our program has lost an access to that memory location.
    // Memory has been leaked.

    // Double allocation
    int *pointer2 = new int(10);

    // Some pointer usage

    // Should delete and reset here.

    pointer2 = new int(8);    // memory with int(10) leaked

    // Nested scope with dynamically allocated memory
    {
        int *pointer3 = new int(33);

        // Use dynamic memory
    }
    // Memory with int(33) leaked.

    /*
        Although there will be no compile-time or (possibly) runtime errors, the program still has a memory leak.
    */ 

    cout << "Program ending well" << endl;
    
    cout << "------------------------------------------" << endl << endl;



    /*
        9. Dynamically allocated arrays

        Static Arrays Vs Dynamic Arrays in C++

        Static arrays and dynamic arrays are two types of arrays in C++ that differ in terms of their size and memory allocation.
        Static arrays have a fixed size that is determined at compile time. 
        They are declared using the square bracket notation and are allocated on the stack.

        Static arrays have the advantage of being simple and efficient to use, 
        but their size must be known at compile time, which can be limiting in certain situations.

        On the other hand, dynamic arrays have a size that is determined at runtime, which makes them more flexible. 
        They are allocated on the heap using the new operator and can be resized during runtime using the realloc function.

        Dynamic arrays have the advantage of allowing the program to allocate memory as needed, 
        which can be useful for large or complex data structures. 
        However, they are more complex to manage and can be a potential source of memory leaks if not properly deallocated using the delete[] operator.
    */ 

    // In this case, the size of the array is not fixed, 
    // which is different from the stack array discussed in earlier chapters that requires a constant size. Why?
    size_t size = 5;   // size_t === unsigned int 

    double *salaries = new double[size];    // salaries array will contain garbage values

    int *students(new(nothrow) int[size]());   // all values initialized to 0

    float *scores = new(nothrow) float[size];   // allocating memory space for an array of size float vars.

    // First 3 will be initialized with 1, 2, 3 and the rest will be 0's
    scores[0] = 1;
    scores[1] = 2;
    scores[2] = 3;

    // nullptr check and use allocated array
    if (scores) {
        cout << "sizeof(scores): " << sizeof(scores) << endl;

        for (size_t i = 0; i < size; ++i) {
            cout << "value = " << scores[i] << " : " << *(scores + i) << ", address: " << (scores + i) << endl;
        }

        /*
            Output:

            value = 1 : 1, address: 0x7ff571f05b30
            value = 2 : 2, address: 0x7ff571f05b34
            value = 3 : 3, address: 0x7ff571f05b38
            value = 0 : 0, address: 0x7ff571f05b3c
            value = 0 : 0, address: 0x7ff571f05b40

            Note that addresses are incremented by 4 bytes, why?
        */
    }

    delete [] salaries;
    salaries = nullptr;

    delete [] students;
    students = nullptr;

    delete [] scores;
    scores = nullptr;


    // Static Arrays Vs Dynamic Arrays
    int levels[5] = {1, 2, 3, 4, 5};    // Lives on the stack

    for (auto l : levels)
        cout << "level: " << l << endl;

    int *pLevels = new int[5]; 
    
    for (size_t i(0); i < 5; ++i) {
        pLevels[i] = (i + 1);
        cout << pLevels[i] << " ";
    }
    cout << endl;

    /*
        Can we get the size of dynamic array?

        We can't! 

        The size of an array allocated with new[] is not stored in any way in which it can be accessed.

        Note that the return type of new [] is not an array - it is a pointer (pointing to the array's first element).
        So if you need to know a dynamic array's length, you have to store it separately.

        Can we loop dynamic arrays with range based loops?

        We can't!

        Dynamic arrays have a size that is determined at runtime, 
        which means that the compiler does not know the size of the array at compile time. 
        As a result, the range-based loop syntax cannot be used to loop through the elements of a dynamic array.
    */ 

    // error: invalid range expression of type 'int *'; no viable 'begin' function available
    for (auto level : pLevels) {
        cout << pLevels[level] << " ";
    }
    
    cout << "------------------------------------------" << endl << endl;



    /*
        10. Pointer to char
    */ 

    const char *message = {"Hello World!"};

    cout << "message: " << message << endl;
    cout << "*message: " << *message << endl;

    cout << "*(message + 1): " << *(message + 1) << endl;
    cout << "*(message + 2): " << *(message + 2) << endl;
    cout << "*(message + 3): " << *(message + 3) << endl;

    // *message = "B";   // will generate a compile-time error because the message is constant char

    // Allow users to modify the string
    char message1[] = {"Hello World!"};
    message1[0] = 'h';

    cout << message1 << endl;

    cout << "------------------------------------------" << endl << endl;


}