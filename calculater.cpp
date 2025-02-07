#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        int num1, num2;
        char op;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /, %): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << "Result : " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result : " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result : " << num1 * num2 << endl;
                break;
            case '/':
              cout<< "Result : " <<num1 / num2 <<endl;
                break;
            case '%' :
            cout<<"Result : " << num1 % num2 <<endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    cout << "Calculator exited!" << endl;
    return 0;
}