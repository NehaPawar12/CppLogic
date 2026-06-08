#include <iostream>
using namespace std;

int main()
{
    int n, reversedNum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    while(n>0)
    {
        int digit = n%10;
        reversedNum = reversedNum*10 + digit;
        n = n/10;
    }

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}