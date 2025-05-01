#include <iostream>

using namespace std;

int main(){
    // auto func = []() {
    //     cout << "Hello World!" << endl;
    // };

    // func();
    // func();



    []() {
        cout << "Hello World!" << endl;
    }();

    // in both ways I can work with LAMBDA functions
    // in one case I am assigning it to a variable, and call the variable
    //in another case I am writing the lambda function and call it immediately. So I can work with both cases


//lambda funct with arguments

auto sum = [] (int a, int b) -> int { // this time I take two arguments ->int means that I will return int value in the end of function
    return a + b;
}(3,5);

//int result = sum(3, 4);
// I can call with parameters in both after immediately function or after I call a assign to a new variable

cout << "result: " << sum << endl;




[]() {
    cout << "Auto Call Lambda Function" << endl;
}();   // why is this lambda function called immediately after the definition?


// 3. Capture lists
/*
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
//what we have inside of capture list is copy once. whether I change a value after that there will be no affect in that;
//33 dakika

//example
int c = 99;

auto func = [c]() { //c=99
    cout << "Inner value : " << c << endl;
};

for (size_t i(0); i < 5; ++i) {
    cout << "Outer value : " << c << endl; //c=99 c=100 ...
    func(); //c==99 c=99 ...
    ++c;
}

return 0;
}