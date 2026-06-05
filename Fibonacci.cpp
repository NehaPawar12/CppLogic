#include <iostream>
using namespace std;

void FibonacciTerms(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    if (n >= 1)
    {
        cout << "Fibonacci Series: " << t1 << " ";
    }
    if (n >= 2)
    {
        cout << t2 << " ";
    }

    for (int i = 3; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }
}

int FibonacciNthTerm(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    if (n == 1)
    {
        return t1;
    }
    if (n == 2)
    {
        return t2;
    }

    for (int i = 3; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return t2;
}

int FibonacciRecursive(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    
    return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    FibonacciTerms(n);
    cout << "\nThe " << n << "term of the Fibonacci series is: " << FibonacciNthTerm(n) << endl;

    cout << "Fibonacci series using recursion: ";
    for (int i = 1; i <= n; i++)
    {
        cout << FibonacciRecursive(i) << " ";
    }

    return 0;
}