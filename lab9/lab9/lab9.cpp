#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swapNumbers(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

void printCharArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArray(double arr[], int size, double minVal, double maxVal) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = minVal + (rand() / (RAND_MAX / (maxVal - minVal)));
    }
}

void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void menu() {
    cout << "1. Обмен значений" << endl;
    cout << "2. Вывод массива символов" << endl;
    cout << "3. Заполнение и вывод массива чисел" << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите задание: ";
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    int choice;

    do {
        menu();
        cin >> choice;

        switch (choice) {
        case 1: {
            double a, b;
            cout << "Введите два числа: ";
            cin >> a >> b;
            cout << "До обмена: a = " << a << ", b = " << b << endl;
            swapNumbers(a, b);
            cout << "После обмена: a = " << a << ", b = " << b << endl;
            break;
        }
        case 2: {
            char chars[] = { 'A', 'B', 'C', 'D', 'E' };
            printCharArray(chars, 5);
            break;
        }
        case 3: {
            const int SIZE = 5;
            double arr[SIZE];
            fillArray(arr, SIZE, 1.0, 10.0);
            cout << "Массив случайных чисел: ";
            printArray(arr, SIZE);
            break;
        }
        case 0:
            cout << "Выход..." << endl;
            break;
        default:
            cout << "Некорректный выбор" << endl;
        }
    } while (choice != 0);

    return 0;
}
