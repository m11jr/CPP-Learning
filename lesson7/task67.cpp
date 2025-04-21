#include <iostream>
using namespace std;

int main(){
int number1;
int number2;
int totalSum1=0;
int totalSum2=0;
cin>>number1>>number2;
/*
if(number2>number1){

    for(int i=number1;i<number2;i++){
        
        for(int j=2;j<=(i/2);j++){
      if(i%j==0){
totalSum1+=j;
}

        }
        cout<<totalSum1<<endl;
totalSum1=0;


    }



}*/
/*system("cls");
int number1,number2;
int totalSum1=0;
int totalSum2=0;
cin>>number1>>number2;

for(int i=number1; i<=(number2);i++){
    totalSum1=0;

    for(int j=1;j<=(i/2);j++){
if(i%j==0){
totalSum1+=j;
}
}

for(int b=i+1;b<=(number2);b++){
    totalSum2=0;
   
    for(int k=1;k<=(b/2);k++){
        if(b%k==0){
            totalSum2+=k;
        }
    }


    if (totalSum1 * b == totalSum2 * i) {
        cout << "Friendly Pair: (" << i << ", " << b << ")\n";
    }
}



}

*/

for (int i = number1; i <= number2; i++) {
    totalSum1 = 0;

    // Find sum of divisors for 'i' (including itself)
    for (int j = 1; j <= i; j++) {
        if (i % j == 0) {
            totalSum1 += j;
        }
    }

    for (int b = i + 1; b <= number2; b++) {
        totalSum2 = 0;

        // Find sum of divisors for 'b' (including itself)
        for (int k = 1; k <= b; k++) {
            if (b % k == 0) {
                totalSum2 += k;
            }
        }

        // Check if the ratio matches (friendly pair condition)
        if (totalSum1 * b == totalSum2 * i) {
            cout << "Friendly Pair: (" << i << ", " << b << ")\n";
        }
    }
}



}