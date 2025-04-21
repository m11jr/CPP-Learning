/*Given two natural numbers A and B, find their greatest common divisor (GCD).

Input Format

The input consists of two lines containing two natural numbers A and B.

Constraints

1 <= A, B <= 10^9

Output Format

Print the GCD of A and B as a single integer.

Sample Input 0

36
48
Sample Output 0

12
Explanation 0

Explanation:

The given numbers are A = 36 and B = 48. The greatest common divisor (GCD) of 36 and 48 is 12.

Sample Input 1

72
90
Sample Output 1

18
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num1;
    int num2;
    int max;

    cin>>num1>>num2;
    if(num1>=num2){
for(int i=1;i<=num2;i++){
    if(num1%i==0 && num2%i==0){
        max=i;
    }
}
}

if(num1<=num2){
    for(int i=1;i<=num1;i++){
        if(num1%i==0 && num2%i==0){
            max=i;
        }
    }
    }
    cout<<"Your Max is: "<<max<<endl;

    return 0;
}

