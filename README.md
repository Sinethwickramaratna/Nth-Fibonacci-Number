# Nth-Fibonacci-Number

**What is Fibonacci?**

The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, typically starting with 0 and 1. The sequence appears as follows:

0, 1, 1, 2, 3, 5, 8, 13, 21, ...

**Code Explanation**

1. **Fibonacci Function**

The function `fibonacci(int N)` is designed to calculate the Nth Fibonacci number:

- **Base Cases:**
  - If \( N \leq 0 \), return 0 (the Fibonacci of 0 is 0).
  - If \( N = 1 \), return 1 (the Fibonacci of 1 is 1).
  
- **Recursive Case:**
  - For any number \( N > 1 \), the function calls itself to compute the sum of the two previous Fibonacci numbers:
  
  \[
  F(N) = F(N-1) + F(N-2)
  \]

This recursive process continues until the base cases are reached.

2. **Main Function**

The `main()` function is where the program begins:

- It prompts the user to input a number \( N \) (the position in the Fibonacci sequence).
- It then calls the `fibonacci(N)` function and prints the result.

**Example**

If you input 5, the Fibonacci sequence will yield:

- \( F(0) = 0 \)
- \( F(1) = 1 \)
- \( F(2) = 1 \)
- \( F(3) = 2 \)
- \( F(4) = 3 \)
- \( F(5) = 5 \)

Thus, the output will be:

"5 Fibonacci Number is: 5"

**Summary**

The program requests a number \( N \) and computes the Nth Fibonacci number. It employs recursion, where the function calls itself to determine the Fibonacci value. While this program is simple and effectively illustrates how recursion operates, it is not very efficient for larger values of \( N \) due to the repeated calculation of the same Fibonacci numbers.
