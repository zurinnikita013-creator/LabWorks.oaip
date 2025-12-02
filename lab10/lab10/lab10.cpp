#include <iostream>
#include <cstdio>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

int main() 
{

    char filename[100];
    cout << "Введите имя файла для проверки: ";
    cin >> filename;

    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        cout << "Файл не существует!" << endl;
    }
    else {
        cout << "Файл существует." << endl;

        cout << "\nСодержимое файла:" << endl;
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            cout << buffer;
        }
        fclose(file);

        char destFilename[100];
        cout << "\nВведите имя файла для копирования: ";
        cin >> destFilename;

        FILE* source = fopen(filename, "r");
        FILE* dest = fopen(destFilename, "w");

        if (source == NULL || dest == NULL) {
            cout << "Ошибка открытия файлов!" << endl;
            return 1;
        }

        char ch;
        while ((ch = fgetc(source)) != EOF) {
            fputc(ch, dest);
        }

        fclose(source);
        fclose(dest);
        cout << "Файл успешно скопирован!" << endl;
    }

    return 0;
}
