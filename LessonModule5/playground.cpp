#include <iostream>

using namespace std;

int main(){

    // int tam ededler silsilesidi

    //variable store data in stack/heap
    //when we declare a variable stack stores it in a specific place, and if we assign value to it, stack also stores it.  we also store the data type of variable
    int our_number;
    cout << "age: " << our_number << endl;   // will have garbage value
     our_number = 30;
    our_number+=1;
    
    int our1Number;
    // we cannot start the cariable with number and we cannot add specific char to variable like ! # %. we can not also use reserved words to declare a variable
    // C++ is also case sensitive. MyWord myWord are different stuffs

    
     /*
        Generally, we have data types like int, float, double, char, bool, void, and auto.
        double and float are used to represent fractional numbers.
        char is used to represent characters.
        bool stores two possible states true or false.
        void is a typeless type, void is used in functions that we'll learn in the next chapters.
        The auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used.
    */ 

    cout<<our_number<<endl;
    //the reason it will work and give a default value is that it is undefine value



    int _ourNumber (10); // that is also a variable initialization

    our1Number = our_number+_ourNumber;
    cout<<our1Number<<endl;
    cout<<"The size of int "<<sizeof(our1Number)<<endl;
}