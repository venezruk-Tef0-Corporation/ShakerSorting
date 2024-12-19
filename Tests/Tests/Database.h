#pragma once /* #pragma once � ��� ��������� �������������, 
				������� ��������� ����������� �������� ����
				��������� ������ ���� ��� ��� ���������� �����
				��������� ���� */

				// ������������ ����������
#include <string>
#include "sqlite3.h"


using namespace std; /* Using namespace std � C++ � ��� ���������,
						������� ��������� ������������ ��� ��������������
						�� ������������ ��� std ��� �������� �������� std:: */

						// ���������� �������, ������������� � ����� .cpp
void deleteAllArrays(sqlite3* db);
void deleteArrayById(sqlite3* db, int id);
int GetID(void);
void saveArrayToDB(string unsorted_array, string array);

// ����� �����