//��������� �������������
#include <iostream>                 
#include <random>                   
#include <string>                   
#include <filesystem>
#include <fstream>

#define RangeForSize 10
#define MinimumForSize 6

#define RangeForElements 100
#define MinimumForElements 50

//������������ ���������� �������
#include "Enums.h"
#include "InputValidation.h"


//������������ ����
using namespace std;
using namespace filesystem;

/// <summary>������� ������ ������ ��� ������ ������</summary>
string AddressTaking(void) {
	FileRecordItems UserChoice = static_cast<FileRecordItems>(0);
	string FilePath;
	bool TryAnotherFile = false;
	bool IsDataSaved = false;
	do {
		cout << "������� ������������� ��� ���������� ���� �����: ";
		getline(cin, FilePath);

		if (fstream(FilePath)) {

			cout << "���� ��� ����������" << endl;

			do {
				cout << "[1] - ������������ ������������ ����" << endl;
				cout << "[2] - ������� ������ ����" << endl;
				cout << "�������� ����� ����: ";

				UserChoice = GetFileRecordItem();

				if ((UserChoice != NewFileChoice) && (UserChoice != Rewriting)) {
					cout << "��������� ����� �� ������. ��������� ����: " << endl;
				}

			} while ((UserChoice != NewFileChoice) && (UserChoice != Rewriting));

			if (UserChoice == NewFileChoice) {
				TryAnotherFile = true;
				continue;
			}
		}
		ofstream MyFile(FilePath.c_str());
		error_code ec{};

		if (!is_regular_file(FilePath, ec)) {
			cout << "����� �������� ������������ ��������" << endl;
			continue;
		}

		if (!MyFile) {
			cout << "������ � ���� ���� ����������" << endl;
			MyFile.close();
			continue;
		}
		IsDataSaved = true;
	} while (!IsDataSaved);

	return FilePath;
}

/// <summary>������� ������ ������ � ����</summary>
/// <param name="FileArray"> - ������������ � ���� ������</param>
/// <param name="SizeOfArray"> - ������������ � ���� ������ �������</param>
void WritingTheDataToFile(int* FileArray, int SizeOfArray) {
	WriteDataMenuItems UserChoice = static_cast<WriteDataMenuItems>(0);
	string PathName = "";
	ofstream File;
	cout << "�������� ������ � ����?" << endl;
	cout << "[1] - �������� ������ � ����" << endl;
	cout << "[2] - ���������� ��� ������" << endl;
	cout << "�������� ����� ����: ";

	do {
		UserChoice = GetWriteDataMenuItem();
		switch (UserChoice) {
			case Writing:
				cout << "���������� � ����" << endl;
				PathName = AddressTaking();
				File.open(PathName.c_str(), ios_base::trunc | ios_base::out);
				if (File.is_open()) {
					File << SizeOfArray << endl;
					File << "[ ";
					for (int i = 0; i < SizeOfArray; i++) File << FileArray[i] << " ";
					File << "]";
					cout << "������ ���������" << endl;
					File.close();
				}
				else {
					cout << "���� ���������� ��� ������" << endl;
					File.close();
				}
				break;
			case Cancelling:
				continue;
				break;

			default:
				cout << "�������� ����� �����������. ��������� ����: ";
				break;
		}

	} while ((UserChoice != Writing) && (UserChoice != Cancelling));
}

/// <summary>������� ������ ���������������� �������</summary>
/// <param name="SortedArray"> - ��������������� ������</param>
/// <param name="SizeOfArray"> - ������ �������</param>
void ShowSortedArray(int* SortedArray, int SizeOfArray) {
	cout << "��������������� ������: [ ";
	for (int i = 0; i < SizeOfArray; i++) cout << SortedArray[i] << " ";
	cout << "]" << endl;
}

/// <summary>������� ���������� �������</summary>
/// <param name="ArrayForSorting"> - �������� ������</param>
/// <param name="SizeOfArray"> - ������ �������</param>
void ShakerSorting(int* ArrayForSorting, int SizeOfArray) {

	bool IsSwapped = true;
	int Start = 0;
	int End = SizeOfArray - 1;

	while (IsSwapped) {
		IsSwapped = false;

		// �������� ����� �����
		for (int i = Start; i < End; ++i) {
			if (ArrayForSorting[i] > ArrayForSorting[i + 1]) {
				swap(ArrayForSorting[i], ArrayForSorting[i + 1]);
				IsSwapped = true;
			}
		}

		// ���� �� ���� ������������, �� ���������� ��� ���������
		if (!IsSwapped)
			break;

		IsSwapped = false;

		// ��������� ��������� �� 1, ��� ��� ����� ������� ������� ��� ��������� �� ���������� �������
		--End;

		// �������� ������ ����
		for (int i = End - 1; i >= Start; --i) {
			if (ArrayForSorting[i] > ArrayForSorting[i + 1]) {
				swap(ArrayForSorting[i], ArrayForSorting[i + 1]);
				IsSwapped = true;
			}
		}

		// ����������� ������ �� 1, ��� ��� ����� ��������� ������� ��� ��������� �� ���������� �������
		++Start;
	}

}

/// <summary>������� ���������� ������� ���������� ����������</summary>
void AutoEntering(void) {

	int ArraySize = rand() % RangeForSize + rand() % MinimumForSize;
	cout << "����������� ������ ������ ������� = " << ArraySize << endl;

	int* Array = new int[ArraySize];

	for (int i = 0; i < ArraySize; i++) {
		Array[i] = rand() % RangeForElements - MinimumForElements;
	}

	cout << "����������� �������� ������: [ ";
	for (int i = 0; i < ArraySize; i++) {
		cout << Array[i] << " ";
	}
	cout << "]" << endl;

	ShakerSorting(Array, ArraySize);
	ShowSortedArray(Array, ArraySize);
	WritingTheDataToFile(Array, ArraySize);
}

/// <summary>������� ���������� ������� � ����������</summary>
void ManualEntering(void) {

	int ArraySize = 0;
	cout << "������� ������ �������: ";
	do {
		ArraySize = GetInt();
		if (ArraySize <= 0) cout << "������ �����. ��������� ����: ";
	} while (ArraySize <= 0);

	int* Array = new int[ArraySize];

	for (int i = 0; i < ArraySize; i++) {
		cout << "������� " << i + 1 << " �������: ";
		Array[i] = GetInt();
	}

	cout << "��������� ������: " << endl;
	cout << "[ ";
	for (int i = 0; i < ArraySize; i++) cout << Array[i] << " ";
	cout << "]" << endl;

	ShakerSorting(Array, ArraySize);
	ShowSortedArray(Array, ArraySize);
	WritingTheDataToFile(Array, ArraySize);
}

/// <summary>������� ������ ������� ���������� �������</summary>
void ProgramEntering(void) {

	EnteringMenuItems UserChoice = static_cast<EnteringMenuItems>(0);

	do {

		cout << "[1] - ��������� ������ �������" << endl;
		cout << "[2] - ��������� ������ ���������� ����������" << endl;
		cout << "�������� ����� ����: ";

		UserChoice = GetEnteringMenuItem();

		switch (UserChoice) {

			case ManualEnter:
				ManualEntering();
				break;
			case AutoEnter:
				AutoEntering();
				break;

			default:
				cout << "�������� ����� �� ������. ��������� ����." << endl;
				break;
		}
	} while ((UserChoice != ManualEnter) && (UserChoice != AutoEnter));

}