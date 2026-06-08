#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int count = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n == 0)
    {
        count = 1; // The number 0 has 1 digit
    }

    while (n > 0)
    {
        n /= 10; // Remove the last digit
        count++;  // Increment the count of digits
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}