#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    char source[100];
    char destination[100];
    char *ptrSource;
    char *ptrDestination;

    cin.getline(source,sizeof(source));
    ptrSource = source;
    ptrDestination = destination;

    for(size_t i(0); i<sizeof(source);i++){
        if(*(ptrSource+i)!='\0'){
            destination[i]=*(ptrSource+i);
        } else if(*(ptrSource+i)=='\0'){
            destination[i]=*(ptrSource+i);
            break;
        }
    }
cout<<"Copied string: ";
    for(size_t i(0); i<sizeof(destination);i++){
        if(*(ptrDestination+i)!='\0'){
            cout<<*(ptrDestination+i);
        } else if(*(ptrSource+i)=='\0'){
           
            break;
        }
    }

    

    return 0;
}
