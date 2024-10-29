//��������� �������������
#include <iostream>

//������������ ���������� �������
#include "ProgramFunctions.h"

using namespace std; /*��������� ������������ ��� ��������������
					   �� ������������ ��� std ��� ��������
					   �������� std::*/

/// <summary>CompletionArrayOfArrays - ������� ��� ���������� ������� ����������� �� ������</summary>
/// <param name="ArrayOfArrays"> - ������ ���������� �� ������</param>
/// <param name="FirstArray"> - ������ ��������� �� ������</param>
/// <param name="SecondArray"> - ������ ��������� �� ������</param>
/// <param name="ThirdArray"> - ������ ��������� �� ������</param>
/// <param name="FourthArray"> - ��������� ��������� �� ������</param>
void CompletionArrayOfArrays(int** ArrayOfArrays, int* FirstArray, int* SecondArray, int* ThirdArray, int* FourthArray) {
	ArrayOfArrays[0] = FirstArray;
	ArrayOfArrays[1] = SecondArray;
	ArrayOfArrays[2] = ThirdArray;
	ArrayOfArrays[3] = FourthArray;
}

/// <summary>SetTesting - ������� ������������ ����������</summary>
void SetTesting(void) {

	bool IsTestFine = true;

	int size = 4;

	int* FirstArray = new int[size] { 1, 3, 2, 5 };
	int* SecondArray = new int[size] { 6, 5, 2, 5 };
	int* ThirdArray = new int[size] { -10, 7, 3, 6 };
	int* FourthArray = new int[size] { 0, 1, 45, -9 };

	int** ArrayOfArrays = new int* [size];
	CompletionArrayOfArrays(ArrayOfArrays, FirstArray, SecondArray, ThirdArray, FourthArray);

	for (int i = 0; i < size; i++) ShakerSorting(ArrayOfArrays[i], size);

	int* TrueFirstArray = new int[size] { 1, 2, 3, 5 };
	int* TrueSecondArray = new int[size] { 2, 5, 5, 6 };
	int* TrueThirdArray = new int[size] { -10, 3, 6, 7 };
	int* TrueFourthArray = new int[size] { -9, 0, 1, 45  };

	int** ArrayOfTrueArrays = new int* [size];
	CompletionArrayOfArrays(ArrayOfTrueArrays, TrueFirstArray, TrueSecondArray, TrueThirdArray, TrueFourthArray);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (ArrayOfArrays[i][j] != ArrayOfTrueArrays[i][j]) {
				cout << "������ ��� ������������ � ������� " << i + 1 << "." << endl
					<< "���������: " << ArrayOfTrueArrays[i][j] << endl
					<< "��������: " << ArrayOfArrays[i][j] << endl;
				IsTestFine = false;
			}
		}
	}

	if (IsTestFine) cout << "����� ��������� �������." << endl;

}