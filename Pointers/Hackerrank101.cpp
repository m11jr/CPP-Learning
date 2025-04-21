#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  char arr[100];
//   char *ptr; //= new(nothrow) char[100];
char *ptr;
  cin.getline(arr,sizeof(arr));
int counter=0;
ptr = arr;
for(size_t i(0); i<sizeof(arr);++i){
    if(*(ptr+i)!='\0'){
        counter++;
    } else{
        break;
    }
}
  cout<<"Length of the string: "<<counter<<endl;
    return 0;
}