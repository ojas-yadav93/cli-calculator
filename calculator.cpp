#include <iostream>
using namespace std;

// Made a basic calculator that can perform addition, subtraction, multiplication, division and modulus function

int main() {
    float num1, num2, result;
    char op;

    while (true)
    {
        cout << "What type of operation do you want to perform? (+, -, *, /, %, q=quit): ";
        cin >> op;
        if (op == 'q')
        {
            break;
        }
        cout << "Enter First numbers: ";
        cin >> num1;
        cout << "Enter Second numbers: ";
        cin >> num2;

        if (op == '+')
        {
            result = num1 + num2;
            cout << "Addition: " << result << endl;
        }
        else if (op == '-')
        {
            result = num1 - num2;
            cout << "Substraction: " << result << endl;
        }
        if (op == '*')
        {
            result = num1 * num2;
            cout << "Multiplication: " << result << endl;
        }
        if (op == '/')
        {
            result = num1 / num2;
            cout << "Division: " << result << endl;
        }
        if (op == '%')
        {
            result = (int)num1 % (int)num2;
            cout << "Remainder: " << result << endl;
        }
    }
    return 0;
}