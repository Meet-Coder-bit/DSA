#include <iostream>
using namespace std;

int main() {
    int N = 5;

    for (int row = 1; row <= N; row++) {
       
        for (int space = 1; space <= row; space++) {
            cout << " ";
        }
       
        for (int col = 1; col <= 5; col++) {
            cout << "*";
        }
        cout << endl; 
    }  
}