#include <iostream>
#include <string>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    string text;
    cout << "Введите строку: ";
    getline(cin, text);
    cout << "\n1. Реверс: ";
    for (int i = text.length() - 1; i >= 0; i--) {
        cout << text[i];
    }
    cout << "\n\n2. Подсчет символа\n";
    char symbol;
    cout << "Введите символ для поиска: ";
    cin >> symbol;
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == symbol) count++;
    }
    cout << "Символ '" << symbol << "' встречается " << count << " раз\n";
    cout << "\n3. Изменение регистра\n";
    string upper = text, lower = text;
    for (int i = 0; i < text.length(); i++) {
        upper[i] = toupper(text[i]);
        lower[i] = tolower(text[i]);
    }
    cout << "Верхний: " << upper << "\n";
    cout << "Нижний: " << lower << "\n";
    cout << "\n4. Замена символа\n";
    char old_char, new_char;
    cout << "Заменить символ: ";
    cin >> old_char;
    cout << "На символ: ";
    cin >> new_char;
    string replaced = text;
    for (int i = 0; i < replaced.length(); i++) {
        if (replaced[i] == old_char) {
            replaced[i] = new_char;
        }
    }
    cout << "После замены: " << replaced << "\n";
    cout << "\n5. Разделение на предложения:\n";
    string sentence = "";
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        if (c == '.' || c == '!' || c == '?') {
            while (!sentence.empty() && sentence[0] == ' ') {
                sentence.erase(0, 1);
            }
            while (!sentence.empty() && sentence[sentence.length() - 1] == ' ') {
                sentence.pop_back();
            }
            if (!sentence.empty()) {
                cout << sentence << "\n";
            }
            sentence = "";
        }
        else {
            sentence += c;
        }
    }

    return 0;
}