//��������� �������������
#include <windows.h>

//������������ ���������� �������
#include "GreetingFunction.h"
#include "StartingFunction.h"

using namespace std; /*��������� ������������ ��� �������������� 
					   �� ������������ ��� std ��� �������� 
					   �������� std::*/

/// <summary>������� �������, ����� ����� � ���������</summary>
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ShowGreeting();
	ProgramStarting();

	return EXIT_SUCCESS;
}