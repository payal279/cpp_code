#include <iostream>
using namespace std;

void number(int n) {

    if (n % 2 == 0) {
        cout << "Even: Yes\n";
    } else {
        cout << "Even: No\n";
    }
    if (n > 0) {
        cout << "Positive: Yes\n";
    } 
    else if (n == 0) {
        cout << "Zero: Yes\n";
    } 
    else {
        cout << "Negative: Yes\n";
    }
    if (n % 3 == 0) {
        cout << "Divisible by 3: Yes\n";
    } 
    else {
        cout << "Divisible by 3: No\n";
    }
    if (n % 5 == 0) {
        cout << "Divisible by 5: Yes\n";
    } 
    else {
        cout << "Divisible by 5: No\n";
    }
    if ((n % 3 == 0) && (n % 5 == 0)) {
        cout << "Divisible by 3 and 5: Yes\n";
    } 
    else {
        cout << "Divisible by 3 and 5: No\n";
    }
    if (n >= -9 && n <= 9) {
        cout << "Single digit: Yes\n";
    } 
    else {
        cout << "Single digit: No\n";
    }
}

int main() {
    int n;
    cout << "Enter any element: ";
    cin >> n;
    number(n);
    return 0;
}
