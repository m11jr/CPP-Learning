#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    // Ensure number1 is the smaller number
    if (number1 > number2) {
        swap(number1, number2);
    }

    for (int i = number1; i <= number2; i++) {
        int totalSum1 = 0;

        // Calculate the sum of divisors of 'i' (including itself)
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                totalSum1 += j;
            }
        }

        for (int b = i + 1; b <= number2; b++) {
            int totalSum2 = 0;

            // Calculate the sum of divisors of 'b' (including itself)
            for (int k = 1; k <= b; k++) {
                if (b % k == 0) {
                    totalSum2 += k;
                }
            }

            // Debugging prints to check sum values
            

            // Check for friendly pair condition
            if (totalSum1 * b == totalSum2 * i) {
                cout << "Friendly Pair: (" << i << ", " << b << ")\n";
            }
        }
    }

    return 0;
}
