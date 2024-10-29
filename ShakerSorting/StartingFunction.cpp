//��������� �������������
#include <iostream>

//������������ ���������� �������
#include "Enums.h"
#include "InputValidation.h"
#include "ProgramFunctions.h"
#include "Testing.h"

using namespace std; /*��������� ������������ ��� �������������� 
					   �� ������������ ��� std ��� �������� 
					   �������� std::*/

/// <summary>������� �������� ����</summary>
void ProgramStarting(void) {
	MainMenuItems UserChoice = static_cast<MainMenuItems>(0);
	do {
		cout << "*** ������� ���� ***" << endl;
		cout << "[1] - ��������� ���������" << endl;
		cout << "[2] - ��������� ������������ ���������" << endl;
		cout << "[3] - ��������� ������ ���������" << endl;
		cout << "�������� ����� ����: ";
		UserChoice = GetMainMenuItem();
		switch (UserChoice) {
			case StartProgram:
				ProgramEntering();
				break;
			case StartTesting:
				SetTesting();
				break;
			case Quit:
				cout << "���������� ������" << endl;
				break;
			default:
				cout << "�������� ����� �� ������. ��������� ����: " << endl;
				break;
		}
	} while (UserChoice != Quit);
}