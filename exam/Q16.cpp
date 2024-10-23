#include <iostream>
using namespace std;
    
int main() {
    int p , v , size;
    int box[5] = {5,6,32,42,78};
    
    cout << "enter poz number :";
    cin >> p;

    cout << "enter val number :";
    cin >> p;

    box[size+1];

    for (int i = size; i < p; i--)
    {
        box[i] = box[i-1];
    }
    box[p]=v;

    for (int i = 0; i < size; i++){

        cout << box[i];
    }
    
}
