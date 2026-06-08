#include <iostream>
using namespace std;

int main()
{
    bool isPrime = true;
    long long int n;
    cout << "Enter a positive integer: ";

    cin >> n;

    if (n <= 1)
    {
        isPrime = false;
    }

    else
    {
        // We can use i*i <= n but it can overflow when the n (number) is very large. So we can use i <= n/i to avoid overflow.
        // we can use i < n 
        for (long long int i = 2; i < n/i; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}