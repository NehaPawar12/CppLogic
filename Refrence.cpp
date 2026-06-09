#include<iostream>
using namespace std;
 
int main()
{
  int a = 10;
  int &ref = a; // ref is a reference to a
  ref = 20; // changing the value of a through ref
  cout << "Value of a: " << a << endl; // Output: 20

  int b = 30;
  ref = b; // changing the value of a through ref again
  cout << "Value of a: " << a << endl; // Output: 30 As ref is a reference to a, it changes the value of a to 30
  return 0;
}