#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double result = 0.0;
    char operation;
    bool firstInput = true;

    while (true) {
        if (firstInput) {
            cout << "Введите первое число: ";
            cin >> result;
            firstInput = false; 
        } else {
            cout << "Текущий результат: " << result << endl;
        }

        cout << "Введите операцию (+, -, *, /, %, ^ для квадрата) или 'x' для выхода: ";
        cin >> operation;

        if (operation == 'x') { 
            break;
        }

        double num;
        switch (operation) {
            case '+':
                cout << "Введите число: ";
                cin >> num;
                result += num;
                break;
            case '-':
                cout << "Введите число: ";
                cin >> num;
                result -= num;
                break;
            case '*':
                cout << "Введите число: ";
                cin >> num;
                result *= num;
                break;
            case '/':
                cout << "Введите число: ";
                cin >> num;
                if (num != 0) {
                    result /= num;
                } else {
                    cout << "Ошибка: Деление на ноль!" << endl;
                }
                break;
            case '%':
                cout << "Введите процент: ";
                cin >> num;
                result += (result * num / 100);
                break;
            case '^':
                result = pow(result, 2); 
                break;
            default:
                cout << "Ошибка: Неверная операция!" << endl;
                continue; 
        }

        cout << "Результат: " << result << endl;
    }

    cout << "Выход из программы." << endl;
    return 0;
}