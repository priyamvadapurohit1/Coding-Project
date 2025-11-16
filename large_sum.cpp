// Created by priya on 2025-11-10.
#include <iostream>
#include <string>
#include "large_sum.h"
using namespace std;

// Read two strings and convert them into reversed digit arrays
void enter_nums(string &num1, string &num2, int digit1[], int digit2[]) {
    cin >> num1 >> num2;
    int num1L = num1.length();
    int num2L = num2.length();

    // cout << num1L << " " << num2L << endl;
    // cout << num1[num1L - 1] << endl;
    // cout << num2[num2L - 1] << endl;
    if (num1L>20) {
        exit(1);
    }

    // error check
    if (num1 == "-1" || num2 == "-1") {
        cout << "The End" << endl;
        exit (0);
    }

    // check if all chars are digits
    for (char c : num1)
        if (c < '0' || c > '9')
            exit(1);
    for (char c : num2)
        if (c < '0' || c > '9')
            exit(1);

    // initialize arrays
    for (int i = 0; i < 20; i++) {
        digit1[i] = 0;
        digit2[i] = 0;
    }

    // fill arrays in reverse order
    for (int i = 0; i < num1L; i++)
        digit1[i] = num1[num1L - 1 - i] - '0';

    for (int j = 0; j < num2L; j++)
        digit2[j] = num2[num2L - 1 - j] - '0';
}

// Add two large numbers (up to 20 digits)
void add_large_numbers(int num1[], int num2[], int sum[]) {
    int carry = 0;
    for (int i = 0; i < 20; i++) {
        int sum_t = num1[i] + num2[i] + carry;
        sum[i] = sum_t % 10;
        carry = sum_t / 10;
    }
    if (carry != 0) {
        cout << "Overflow! Result too large." << endl;
        exit(1);
    }
}

// Display the sum (removes leading zeros)
void display_num(int sum[]) {
    cout << "Sum: ";
    bool leading = true;

    // find the first non-zero digit from the end
    for (int i = 19; i >= 0; i--) {
        if (sum[i] != 0)
            leading = false;
        if (!leading)
            cout << sum[i];
    }

    if (leading)
        cout << "0";
}

int main() {
    while (true) {
        string num1,num2;
        int digit1[20]={0}, digit2[20]={0}, sum[20]={0};
        enter_nums(num1, num2,  digit1,  digit2) ;
        add_large_numbers(digit1, digit2, sum);
        display_num(sum);
        cout << endl;
    }
}





