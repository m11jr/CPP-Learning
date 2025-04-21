/*
Given a natural number N (N < 1000), find all natural numbers not exceeding N that are divisible by each of their digits.

Input Format

The input consists of a single line containing a natural number N.

Constraints

1 <= N < 1000

Output Format

Print all natural numbers not exceeding N that are divisible by each of their digits.

Sample Input 0

1000
Sample Output 0

1 2 3 4 5 6 7 8 9 11 12 15 22 24 33 36 44 48 55 66 77 88 99 111 112 115 122 124 126 128 132 135 144 155 162 168 175 184 212 216 222 224 244 248 264 288 312 315 324 333 336 366 384 396 412 424 432 444 448 488 515 555 612 624 636 648 666 672 728 735 777 784 816 824 848 864 888 936 999
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    int curr;

  system("cls");
    cin>>num;
    if(num<1000){
       
       
       
        for(int i=1;i<=num;i++){ //i=148;
            int number =i;
            bool print=true;
           while(number>0){ //number=148;
curr=number%10;
if(curr==0){
    print=false;
    break;
} else {
    if(i%curr!=0){
        print=false;
        break;
    }
}
number /=10;
           }
           if (print==true)
           {
            cout<<i<<" ";
           }
           
        }
    }

    return 0;
}
