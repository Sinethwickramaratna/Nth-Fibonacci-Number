#include <iostream> // Include input-output stream library
using namespace std;

// Function to compute the Nth Fibonacci number using recursion
int fibonacci(int N) {
    // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    if (N <= 0) { 
        return 0; 
    }
    if (N == 1) { 
        return 1; 
    }

    // Recursive case: F(N) = F(N-1) + F(N-2)
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int N; // Variable to store user input

    cout << "Enter a number: ";
    cin >> N; // Take input from user

    // Output the Nth Fibonacci number
    cout << N << " Fibonacci Number is: " << fibonacci(N) << endl;

    return 0; // Indicate successful program execution
}
