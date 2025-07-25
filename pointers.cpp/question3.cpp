#include <iostream>
using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 8;

    cout << "Before:" << a << ", b=" << b << '\n';
    swap(&a, &b); 
    cout << "After:" << a << ", b=" << b << '\n';

    return 0;
}
