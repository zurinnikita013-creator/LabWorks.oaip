
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int year, month;
	cout << "Введите год" << endl;
	cin >> year;
	cout << "Введите месяц" << endl;
	cin>>month;
	if (month < 1 || month>12)
	{
		cout << "Ошибка: некорректный номер месяца!" << endl;
	}
	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	if (isLeap)
	{
		cout << "Високосный"<<endl;
	}
	else 
	{
		cout << "Не високосный" << endl;
	}
	int days;
	switch (month)
	{
	case 1:case 3:case 5:case 7:case 8:case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		days = isLeap ? 29 : 28;
	}
	cout << "Количество дней: " << days << endl;
	
	return 0;
}
