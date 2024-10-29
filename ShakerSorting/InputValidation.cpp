//��������� �������������
#include <iostream>
#include <string>

//������������ ���������� �������
#include "Enums.h"


//������������ ����
using namespace std;

//���������� �������
template <typename T>

//������� �� �������� ����� � �������������� �������
T GetInput(void) {
	T UserInput{};
	cin >> UserInput;
	if (cin.fail()) {
		cout << "������ ��������� �����. ������� ���������� ������: ";
		while (cin.fail()) {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> UserInput;
		}
	}
	cin.ignore(INT_MAX, '\n');
	return UserInput;
}

/// <summary>������� �� �������� �������������� ����� � �������������� ��������� �������</summary>
int GetInt(void) {
	return GetInput<int>();
}

/// <summary>������� �� �������� ����� ������ �������� ���� � �������������� ������� �� �������� ����� ������ �����</summary>
MainMenuItems GetMainMenuItem(void) {
	return static_cast<MainMenuItems>(GetInt());
}

/// <summary>������� �� �������� ����� ������ ���������� �� ������� ���� � �������������� ������� �� �������� ����� ������ �����</summary>
EnteringMenuItems GetEnteringMenuItem(void) {
	return static_cast<EnteringMenuItems>(GetInt());
}

/// <summary>������� �� �������� ����� ������ ���� ��� ������ ������ � �������������� ������� �� �������� ����� ������ �����</summary>
WriteDataMenuItems GetWriteDataMenuItem(void) {
	return static_cast<WriteDataMenuItems>(GetInt());
}

/// <summary>������� �� �������� ����� ������ ���� ��� ������ ����� ��� ������ � �������������� ������� �� �������� ����� ������ ����� </summary>
FileRecordItems GetFileRecordItem(void) {
	return static_cast<FileRecordItems>(GetInt());
}