#include <iostream>
#include <ctime>
#include <windows.h>
#include "sqlite3.h"
#include "AddArray.h"
#include "DeleteArray.h"
#include "GetArray.h"

using namespace std;

void ShowMainMenu() {
    cout << "ГЛАВНОЕ МЕНЮ" << endl;
    cout << "Выберите пункт меню: " << endl;
    cout << "1 - Добавление 100 массивов в базу данных" << endl;
    cout << "2 - Добавление 1000 массивов в базу данных" << endl;
    cout << "3 - Добавление 10000 массивов в базу данных" << endl;
    cout << "4 - Выгрузка и сортировка 100 случайных массивов из базы данных" << endl;
    cout << "5 - Очистка базы данных" << endl;
    cout << "6 - Выход" << endl;
    cout << "Выбор: ";
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    int choice = 0;
    do {

        ShowMainMenu();

        do {
            cin >> choice;
            if (1 > choice || 6 < choice) {
                cout << "Введено неверное значение. Повторите ввод: ";
            }
        } while (1 > choice || 6 < choice);
        

        switch (choice) {

        case 1:
            AddArrayToDB(100);
            break;

        case 2:
            AddArrayToDB(1000);
            break;

        case 3:
            AddArrayToDB(10000);
            break;

        case 4:
            GetArray();
            break;

        case 5:
            DeleteArray();
            break;

        case 6:
            cout << "До свидания!" << endl << endl;
            break;
        }

    } while (choice != 6);

    return 0;
}