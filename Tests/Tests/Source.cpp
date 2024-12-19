#include <iostream>
#include <ctime>
#include <windows.h>
#include "sqlite3.h"
#include "AddArray.h"
#include "DeleteArray.h"
#include "GetArray.h"

using namespace std;

void ShowMainMenu() {
    cout << "������� ����" << endl;
    cout << "�������� ����� ����: " << endl;
    cout << "1 - ���������� 100 �������� � ���� ������" << endl;
    cout << "2 - ���������� 1000 �������� � ���� ������" << endl;
    cout << "3 - ���������� 10000 �������� � ���� ������" << endl;
    cout << "4 - �������� � ���������� 100 ��������� �������� �� ���� ������" << endl;
    cout << "5 - ������� ���� ������" << endl;
    cout << "6 - �����" << endl;
    cout << "�����: ";
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
                cout << "������� �������� ��������. ��������� ����: ";
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
            cout << "�� ��������!" << endl << endl;
            break;
        }

    } while (choice != 6);

    return 0;
}