#include <iostream>
using namespace std;

int main() 
{
    int a, b;

   
    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;
   
    int result = (a > b) ? a : b;
    cout << "Result: " << result << endl;

   
}