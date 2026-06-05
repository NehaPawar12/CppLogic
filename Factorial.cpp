#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
 
int main()
{
  int n;
  cout<<"Enter a positive integer: ";
  cin>>n;

  int fact = 1;

  for(int i = 1; i <= n; ++i)
  {
      fact *= i;
  }

  cout << "Factorial of " << n << " = " << fact<< endl;

  cout << "Factorial of " << n << " (using recursion) = " << factorial(n) << endl;

  return 0;
}