#pragma once /*это директива препроцессора, 
	           котора€ указывает компил€тору 
			   включить файл заголовка только 
			   один раз при компил€ции файла 
			   исходного кода*/

//ќбъ€вление функций, описанных в файле ProgramFunctions.cpp
void WritingTheDataToFile(int* array, int size);
void ShowSortedArray(int* array, int size);
void ShakerSorting(int* array, int size);
void AutoEntering(void);
void ManualEntering(void);
void ProgramEntering(void);