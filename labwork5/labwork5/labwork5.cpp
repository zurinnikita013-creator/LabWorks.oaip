#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    double arr[size];
    double target;
    double sum=0;
    cout << "Введите массив из 10 вещественных чисел" << endl;

    for (int i=0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Массив: ";
    for (int i=0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Введите значение для поиска: ";
    cin >> target;
    cout << "Позиции элементов со значением " << target << ": ";
    bool found = false;
    for (int i=0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << i+1 << " ";
            found = true;
        }
    }
    if (!found)
    {
        cout << "Элементы не найдены" << endl;
    }
    cout << endl;
    for (int i=0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Сумма: " << sum << endl;
    double min=arr[0];
    double max=arr[0];
    for (int i=0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;
    return 0;
}