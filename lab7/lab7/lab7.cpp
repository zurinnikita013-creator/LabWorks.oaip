#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <sstream>
using namespace std;

void reverseString() {
    string str;
    cout << "Введите строку: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << "Результат: " << str << endl;
}

void countChar() {
    string str;
    char ch;
    cout << "Введите строку: ";
    getline(cin, str);
    cout << "Введите символ для поиска: ";
    cin >> ch;
    cin.ignore();

    int count = 0;
    for (char c : str) if (c == ch) count++;

    if (count > 0) cout << "Символ '" << ch << "' встречается " << count << " раз" << endl;
    else cout << "Символ не найден" << endl;
}

void changeCase() {
    string str;
    cout << "Введите строку: ";
    getline(cin, str);
    cout << "Выберите регистр (1 - верхний, 2 - нижний): ";
    int choice;
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        for (char& c : str) c = toupper(c);
        cout << "Результат: " << str << endl;
    }
    else if (choice == 2) {
        for (char& c : str) c = tolower(c);
        cout << "Результат: " << str << endl;
    }
    else {
        cout << "Некорректный выбор" << endl;
    }
}

void replaceChar() {
    string str;
    char oldCh, newCh;
    cout << "Введите строку: ";
    getline(cin, str);
    cout << "Введите символ для замены: ";
    cin >> oldCh;
    cout << "Введите новый символ: ";
    cin >> newCh;
    cin.ignore();

    for (char& c : str) {
        if (c == oldCh) c = newCh;
    }
    cout << "Результат: " << str << endl;
}

void splitSentences() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);

    string sentence;
    for (char c : text) {
        if (c == '.' || c == '!' || c == '?') {
            size_t start = sentence.find_first_not_of(" \t\n");
            size_t end = sentence.find_last_not_of(" \t\n");
            if (start != string::npos && end != string::npos) {
                string clean = sentence.substr(start, end - start + 1);
                cout << clean << endl;
            }
            sentence.clear();
        }
        else {
            sentence += c;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int choice;
    do {
        cout << "Задание1\nЗадание 2\nЗадание 3\n";
        cout << "Задание 4\nЗадание 5\n";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1: reverseString(); break;
        case 2: countChar(); break;
        case 3: changeCase(); break;
        case 4: replaceChar(); break;
        case 5: splitSentences(); break;
        case 0: cout << "Выход..." << endl; break;
        default: cout << "Некорректный выбор" << endl;
        }
    } while (choice != 0);

    return 0;
}
