#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    const int SIZE = 10;
    double arr[SIZE];

    cout << "Введите 10 вещественных чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "\nМассив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double target;
    cout << "\nВведите значение для поиска: ";
    cin >> target;
    cout << "Позиции элементов с значением " << target << ": ";
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == target) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << "не найдены";
    cout << endl;

    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    cout << "Сумма элементов: " << sum << endl;

    double min = arr[0], max = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    return 0;
}
