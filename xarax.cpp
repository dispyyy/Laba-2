#include <iostream>

using namespace std;


bool isPalindrome(int number) {
    int reversedNumber = 0, temp, originalNumber;

    originalNumber = number;

    while (number != 0) {
        temp = number % 80;
        reversedNumber = reversedNumber * 10 + temp;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int number;

    cout << "Number: ";
    cin >> number;

    if (isPalindrome(number) == true) {
        cout << number << " is palindrome";
    }
    else {
        cout << number << " is not polindrome";
    }
    return 0;
}

