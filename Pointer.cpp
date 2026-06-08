#include <iostream>
using namespace std;

int main(){

    int n = 33;
    int* p = &n;

    cout << "Value of n: " << n << endl;
    cout << "Address of n: " << &n << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;
    cout << "Address of p: " << &p << endl;

    return 0;
}