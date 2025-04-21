#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = 5;
    int max;

    max = (a > b) ? a : b;

    cout << "max: " << max << endl;


    bool fast = false;
    int speed = fast ? 300 : 90;
    int velocity(fast ? 9 : 3);     // int velocity = fast ? 9 : 3;

    cout << "The speed is:    " << speed << endl;
    cout << "The velocity is: " << velocity << endl;

    cout << "----------------------------" << endl << endl;


}