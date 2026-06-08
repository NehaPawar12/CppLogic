#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int temp = n, reversedNum = 0;

    while(temp > 0){
        int digit = temp%10;
        reversedNum = reversedNum*10 + digit;
        temp = temp/10;
    }

    if(n == reversedNum)
        cout << n << " is a palindrome." << endl;
    else
        cout << n << " is not a palindrome." << endl;

    return 0;
}