/*
Given a natural number N, determine if it can be expressed as the sum of the squares of two distinct natural numbers.

Input Format

The input consists of a single line containing a natural number N.

Constraints

1 <= N <= 100000000

Output Format

Print "YES" if N can be represented as the sum of the squares of two distinct natural numbers, otherwise print "NO".

Sample Input 0

25
Sample Output 0

YES
Explanation 0

Explanation:

The given number is 25. It can be represented as the sum of the squares of two distinct natural numbers: 3^2 + 4^2 = 25.

Sample Input 1

50
Sample Output 1

YES
Explanation 1

Explanation:

The given number is 50. It can be represented as the sum of the squares of two distinct natural numbers: 1^2 + 7^2 = 50.

Sample Input 2

30
Sample Output 2

NO
Explanation 2

Explanation:

The given number is 30. It cannot be represented as the sum of the squares of two distinct natural numbers.

Sample Input 3

81
Sample Output 3

NO
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
     int number;
   cin>>number;
 
 
  int total;
  bool printstop=false;

   for(int i =1; i<=number;i++){

for(int j=1;j<i;j++){
     total = pow(i,2)+pow(j,2);
 
     if(total==number){
        cout<<"YES"<<endl;
        printstop=true;
        break;
    }

}
if(printstop==true){
    break;
}

   }
if(printstop==false){
    cout<<"NO"<<endl;
}
  
    return 0;
}
