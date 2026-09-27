#include <stdio.h>

int nthFibonacciUtil(int n, int dp[])
{

    // Base case
    if (n <= 1)
    {
        return n;
    }

    // Check if the result is
    // already in the dp table
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // calculate Fibonacci number
    // and store it in dp table
    dp[n] = nthFibonacciUtil(n - 1, dp) + nthFibonacciUtil(n - 2, dp);

    return dp[n];
}

int nthFibonacci(int n)
{

    // Create a dp table and
    // initialize with -1(invalid value)
    int dp[n + 1];
    for (int i = 0; i <= n; i++)
        dp[i] = -1;

    return nthFibonacciUtil(n, dp);
}

int main()
{
    int n = 5;
    int result = nthFibonacci(n);
    printf("%d", result);
    return 0;
}