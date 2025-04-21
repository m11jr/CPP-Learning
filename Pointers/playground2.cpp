#include <iostream>

using namespace std;

int main(){

    // int a =45;
    // int *p = new int(9);
 


    // int *p2 = new int(5);
    // int *p3 = p2;

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



}