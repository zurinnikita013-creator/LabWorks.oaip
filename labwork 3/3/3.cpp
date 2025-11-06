
#include <iostream>
#include<iomanip>
#include<cctype>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const double USD_RATE = 0.011;
    const double EUR_RATE = 0.010;
    double rubles;
    string currency;
    cout << "Введите сумму в рублях" << endl;
    cin >> rubles;
    cout << "Введите валюту для перевода" << endl;
    cin >> currency;
    double result;
    bool validCurrency = true;
    if (currency == "USD")
    {
        result = rubles * USD_RATE;
        cout << "Сумма в долларах: " << result;
    }
    else if (currency == "EUR")
    {
        result = rubles * EUR_RATE;
        cout << "Сумма в евро: " << result;
    }
    else
    {
        cout << "Некорретная валюта";
    }
}

